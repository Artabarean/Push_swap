/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:15:21 by atabarea          #+#    #+#             */
/*   Updated: 2025/03/25 11:49:39 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char     *ptr;

    ptr = malloc(nmemb * size * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    ft_bzero(ptr, (nmemb * size));
    return (ptr);
}
/*int main()
{    printf("%p\n", ft_calloc(5, 10));
    return (0);
}*/