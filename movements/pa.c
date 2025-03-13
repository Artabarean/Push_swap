/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:09:29 by alex              #+#    #+#             */
/*   Updated: 2025/03/13 18:19:21 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(int *sa, int *sb)
{
    int temp;
    int temp2;

    temp = sa[0];
    sa[0] = sb[0];
    temp2 = sa[1];
    sa[1] = temp;
    temp = sa[2];
    sa[2] = temp2;
    temp2 = sa[3];
    sa[3] = temp;
    temp = sa[4];
    sa[4] = temp2;
    temp2 = sa[5];
    sa[5] = temp;
    temp = sa[6];
    sa[6] = temp2;
    temp2 = sa[7];
    sa[7] = temp;
    temp = sa[8];
    sa[8] = temp2;
    temp2 = sa[9];
    sa[9] = temp;
}
