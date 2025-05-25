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
    void *point = malloc(size*nitems);
    unsigned char *p2p = (unsigned char *) point;
    int i = 0;
    if(size == 0 || nitems == 0)
        return point;
    if(!point)
        return 0;
    while(nitems>0)
    {
        p2p[i] = 0;
        i++;
        nitems--;
    }
    return point;
}
