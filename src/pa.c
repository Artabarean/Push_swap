/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:09:29 by alex              #+#    #+#             */
/*   Updated: 2025/03/18 10:48:24 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(int *sa, int *sb)
{
    int i;
    int temp;
    
    i = 0;
    if (sa[i] == '\0' || sb[i] == '\0')
        return ;
    temp = sb[0];
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
