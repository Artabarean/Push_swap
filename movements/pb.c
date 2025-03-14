/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:19:50 by alex              #+#    #+#             */
/*   Updated: 2025/03/14 13:57:08 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pb(int *sa, int *sb)
{
    int i;
    int temp;
    
    if (sa == NULL || sb == NULL)
        return;
    temp = sa[0];
    i = 0;
    while (sb[i] != '\0')
        i++;
    while (i > 0)
    {
        sb[i] = sb[i - 1];
        i--;
    }
    sb[0] = temp;
    
    write(1, "pb\n", 3);
}
