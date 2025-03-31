/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:30:19 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/31 09:50:00 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_is_sorted(t_list *stack)
{
	int	i;

	i = 0;
    while (i < stack->top)
    {
        if (stack->array[i] > stack->array[i + 1])
            return (0);
		i++;
    }
    return (1);
}

int stack_is_empty(t_list *stack)
{
    return (stack->top < 0);
}

int stack_len(t_list *stack)
{
    return (stack->top + 1);
}

int verification(int argc, char **numbers, int count)
{
    t_list *sa;
    t_list *sb;
    
    sa = stack_init(count);
    sb = stack_init(count);
    if (!sa || !sb)
        return (free_stacks(sa, sb), 1);
    stack_init_from_strings(sa, numbers);
    sa->top = count;
    if (!stack_is_sorted(sa))
    {
        if (stack_len(sa) == 2 && sa->array[1] > sa->array[0])
            swap(sa);
        else if (stack_len(sa) == 3)
            sort_three(sa);
        else
            push_swap(sa, sb);
    }
    free_stack(sa);
    free_stack(sb);
    if (argc == 2)
		free(numbers);
    return (0);
}

int main(int argc, char *argv[])
{
    char **numbers;
	int count;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    if (argc == 2)
        numbers = ft_split(argv[1], ' ');
    else
        numbers = &argv[1];
    count = 0;
    while (numbers[count])
        count++;
    return (verification(argc, numbers, count));
}
