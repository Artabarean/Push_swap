/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:26:28 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/18 10:45:24 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void print_stack(int *stack, const char *name) {
    ft_printf("%s: ", name);
    int i = 0;
    if (stack) {
        while (stack[i] != '\0') {
            printf("%d ", stack[i]);
            i++;
        }
    }
    ft_printf("\n");
}

int *init_stack(int size, int start_val)
{
	int	i;
	int *stack;
	
	i = 0; 
	stack = malloc((size + 1) * sizeof(int));
    if (!stack) {
        ft_printf("Memory allocation failed\n");
        exit(1);
    }
    while (i < size)
	{
		i++;
        stack[i] = start_val + i;
    }
    stack[size] = '\0';    
    return stack;
}

int main(int argc, char *argv[])
{
    int *stack_a = init_stack(5, 10);
    int *stack_b = init_stack(3, 20);
    
    printf("Initial state:\n");
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating pa (push B->A):\n");
    pa(stack_a, stack_b);
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating pb (push A->B):\n");
    pb(stack_a, stack_b);
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating ra (rotate A):\n");
    ra(stack_a);
    print_stack(stack_a, "Stack A");
    printf("\n");
    printf("Demonstrating rb (rotate B):\n");
    rb(stack_b);
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating rr (rotate both):\n");
    rr(stack_a, stack_b);
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating rra (reverse rotate A):\n");
    rra(stack_a);
    print_stack(stack_a, "Stack A");
    printf("\n");
    printf("Demonstrating rrb (reverse rotate B):\n");
    rrb(stack_b);
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating rrr (reverse rotate both):\n");
    rrr(stack_a, stack_b);
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating _sa (swap first two elements of A):\n");
    _sa(stack_a);
    print_stack(stack_a, "Stack A");
    printf("\n");
    printf("Demonstrating _sb (swap first two elements of B):\n");
    _sb(stack_b);
    print_stack(stack_b, "Stack B");
    printf("\n");
    printf("Demonstrating ss (swap both):\n");
    ss(stack_a, stack_b);
    print_stack(stack_a, "Stack A");
    print_stack(stack_b, "Stack B");
    printf("\n");
    free(stack_a);
    free(stack_b);
    
    return 0;
}