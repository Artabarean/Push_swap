/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:19:50 by alex              #+#    #+#             */
/*   Updated: 2025/03/13 18:26:34 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pb(int *sa, int *sb)
{
     int temp;
    int temp2;

    temp = sb[0];
    sb[0] = sa[0];
    temp2 = sb[1];
    sb[1] = temp;
    temp = sb[2];
    sb[2] = temp2;
    temp2 = sb[3];
    sb[3] = temp;
    temp = sb[4];
    sb[4] = temp2;
    temp2 = sb[5];
    sb[5] = temp;
    temp = sb[6];
    sb[6] = temp2;
    temp2 = sb[7];
    sb[7] = temp;
    temp = sb[8];
    sb[8] = temp2;
    temp2 = sb[9];
    sb[9] = temp;
}