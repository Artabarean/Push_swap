/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:12:33 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/18 10:25:26 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb(int *sb)
{
    int temp;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (!sb || sb[1] == '\0')
        return ;
    temp = sb[j];
    while (sb[i] != '\0')
      i++;
    i--;
    while (j < i)
    {
        sb[j] = sb[j + 1];
        j++;
    }
    sb[j] = temp;
    write(1, "rrb\n", 3);
}
