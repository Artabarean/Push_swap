/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:09:29 by alex              #+#    #+#             */
/*   Updated: 2025/03/14 13:57:42 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(int *sa, int *sb)
{
    int i;
    int temp;
    
    if (sa == NULL || sb == NULL)
        return;
    temp = sb[0];
    i = 0;
    while (sa[i] != '\0')
        i++;
    while (i > 0)
    {
        sa[i] = sa[i - 1];
        i--;
    }
    sa[0] = temp;
    
    write(1, "pb\n", 3);
}
