/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:17:28 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 14:10:57 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *to, const void *from, size_t numBytes)
{
   unsigned char *dest = (unsigned char*) to;
    const unsigned char *src = (const unsigned char*) from;
    size_t i = 0;
    if(!dest || !src)
        return 0;
    if(dest < src){
        while(i< numBytes)
        {
            dest[i] = src[i];
            i++;
        }       
    }
    else if(dest>src)
    {
        i = numBytes;
        while(i>0)
        {
            dest[i-1] = src[i-1];
            i--;
        }
    }
    return to;
}
