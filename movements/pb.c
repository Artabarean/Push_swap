/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:19:50 by alex              #+#    #+#             */
/*   Updated: 2025/03/14 12:14:01 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pb(int *sa, int *sb)
{
   int i;
    int temp;

    if (!sa)
        return (write(1, "stack 'a' is empty", 19));
    temp = sb[0];
    sb[0] = sa[0];
    i = 0;
    while (sb[i + 1] != NULL)
    {
        sb[i + 1] = sb[i];
        i++;
    }
    write(1, "pb\n", 3);
}
