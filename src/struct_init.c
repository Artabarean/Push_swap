/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 11:24:38 by alex              #+#    #+#             */
/*   Updated: 2025/04/02 13:14:48 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

l_list  *struct_init(int initializer)
{
    l_list  *auxvar;
    
    auxvar = (l_list *)malloc (sizeof (l_list));
    if (!auxvar)
        return (NULL);
    auxvar->len = initializer;
    auxvar->ck_count = initializer;
    auxvar->ck_size = initializer;
    auxvar->min = initializer;
    auxvar->max = initializer;
    auxvar->median = initializer;
    auxvar->ck_min = initializer;
    auxvar->ck_max = initializer;
    auxvar->pushed = initializer;
    auxvar->best_pos = initializer;
    auxvar->c = initializer;
    return (auxvar);
}
