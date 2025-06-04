/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:30:42 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/23 17:30:43 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    size_t i = 0;
    if (nitems && size && nitems > ((size_t)-1) / size)
        return 0;
    void *point = malloc(nitems * size);
    if (!point)
        return 0;
    size_t total = nitems * size;
    unsigned char *p2p = (unsigned char *)point;
    while(i < total)
    {
         p2p[i] = 0;
         i++;
    }
    return point;
}
