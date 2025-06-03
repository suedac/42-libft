/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:04:02 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 12:23:07 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
    char *dest = (char*) dest_str;
    const char *src = (const char*) src_str;
    while(n>0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    return dest_str;
}
