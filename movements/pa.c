/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:09:29 by alex              #+#    #+#             */
/*   Updated: 2025/03/14 12:14:55 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(int *sa, int *sb)
{
    int i;
    int temp;

    if (!sb)
        return (write(1, "stack 'b' is empty", 19));
    temp = sa[0];
    sa[0] = sb[0];
    i = 0;
    while (sa[i + 1] != NULL)
    {
        sa[i + 1] = sa[i];
        i++;
    }
    write(1, "pa\n", 3);
}
