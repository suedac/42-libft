/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:24:29 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 12:20:10 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *ptr, int x, size_t n)
{
    unsigned char *p = (unsigned char *)ptr;
    while (n > 0)
    {
        *p = (unsigned char)x;
        p++;
        n--;
    }
    return ptr;
}
