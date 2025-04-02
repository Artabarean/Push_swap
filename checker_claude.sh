#!/bin/bash

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[0;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Function to generate n unique random numbers
generate_random_numbers() {
    local n=$1
    local numbers=()
    local i=0
    
    while [ $i -lt $n ]; do
        local num=$((RANDOM % 1000 - 500)) # Generate between -500 and 499
        
        # Check if number is already in the array
        local exists=0
        for j in "${numbers[@]}"; do
            if [ $j -eq $num ]; then
                exists=1
                break
            fi
        done
        
        if [ $exists -eq 0 ]; then
            numbers+=($num)
            i=$((i + 1))
        fi
    done
    
    echo "${numbers[@]}"
}

# Function to run a test
run_test() {
    local numbers=($1)
    local count=${#numbers[@]}
    
    echo -e "\n${BLUE}Testing with $count numbers:${NC}"
    echo -e "${YELLOW}${numbers[*]}${NC}"
    
    # Run push_swap and count operations
    local operations=$(./push_swap ${numbers[@]} | wc -l)
    
    # Check if the result is correct
    local result=$(./push_swap ${numbers[@]} | ./checker_linux ${numbers[@]})
    
    echo -e "Operations: $operations"
    if [ "$result" == "OK" ]; then
        echo -e "${GREEN}Result: OK ✓${NC}"
    else
        echo -e "${RED}Result: KO ✗${NC}"
    fi
    
    return $operations
}

# Check if push_swap exists
if [ ! -f "./push_swap" ]; then
    echo -e "${RED}Error: push_swap executable not found${NC}"
    exit 1
fi

# Check if checker_linux exists
if [ ! -f "./checker_linux" ]; then
    echo -e "${RED}Error: checker_linux executable not found${NC}"
    exit 1
fi

# Make sure executables have permissions
chmod +x push_swap checker_linux

# Header
echo -e "${BLUE}============ PUSH_SWAP TESTER ============${NC}"

# Test with predefined simple cases
echo -e "\n${BLUE}SIMPLE CASES${NC}"

# Test with already sorted array
echo -e "\n${BLUE}Testing with already sorted array:${NC}"
numbers="1 2 3 4 5"
echo -e "${YELLOW}$numbers${NC}"
operations=$(./push_swap $numbers | wc -l)
result=$(./push_swap $numbers | ./checker_linux $numbers)
echo -e "Operations: $operations"
if [ "$result" == "OK" ]; then
    echo -e "${GREEN}Result: OK ✓${NC}"
else
    echo -e "${RED}Result: KO ✗${NC}"
fi

# Test with 3 random numbers (multiple times)
echo -e "\n${BLUE}TESTING WITH 3 NUMBERS (x5)${NC}"
total_ops=0
for i in {1..5}; do
    random_nums=$(generate_random_numbers 3)
    run_test "$random_nums"
    total_ops=$((total_ops + $?))
done
average=$((total_ops / 5))
echo -e "Average operations for 3 numbers: $average"

# Test with 5 random numbers (multiple times)
echo -e "\n${BLUE}TESTING WITH 5 NUMBERS (x5)${NC}"
total_ops=0
for i in {1..5}; do
    random_nums=$(generate_random_numbers 5)
    run_test "$random_nums"
    total_ops=$((total_ops + $?))
done
average=$((total_ops / 5))
echo -e "Average operations for 5 numbers: $average"

# Test with 100 random numbers
echo -e "\n${BLUE}TESTING WITH 100 NUMBERS${NC}"
random_nums=$(generate_random_numbers 100)
run_test "$random_nums"
ops_100=$?

# Test with 500 random numbers
echo -e "\n${BLUE}TESTING WITH 500 NUMBERS${NC}"
random_nums=$(generate_random_numbers 500)
run_test "$random_nums"
ops_500=$?

# Summary
echo -e "\n${BLUE}============ SUMMARY ============${NC}"
echo -e "Operations for 100 numbers: $ops_100"
if [ $ops_100 -lt 700 ]; then
    echo -e "${GREEN}Under 700 operations! ✓${NC}"
else
    echo -e "${RED}Over 700 operations! ✗${NC}"
fi

echo -e "Operations for 500 numbers: $ops_500"
if [ $ops_500 -lt 5500 ]; then
    echo -e "${GREEN}Under 5500 operations! ✓${NC}"
else
    echo -e "${RED}Over 5500 operations! ✗${NC}"
fi

echo -e "\n${BLUE}Done!${NC}"