/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:04:21 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/18 10:24:53 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(int *sa)
{
    int temp;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (!sa || sa[1] == '\0')
        return ;
    temp = sa[j];
    while (sa[i] != '\0')
      i++;
    i--;
    while (j < i)
    {
        sa[j] = sa[j + 1];
        j++;
    }
    sa[j] = temp;
    write(1, "rra\n", 3);
}
