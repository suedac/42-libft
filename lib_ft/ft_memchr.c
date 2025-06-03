/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:44:48 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 12:21:23 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *p = (const unsigned char *)str;
    while(n>0 && (const char*)str != 0)
    {
        if(*p == (unsigned char)c)
            return (void *)p;
        n--;
        p++;
    }
    return 0;
}
