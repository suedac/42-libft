/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:00:33 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 12:00:47 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen = 0;
    size_t slen = 0;
    size_t i;

    while (dst[dlen] && dlen < dstsize)
        dlen++;
    while (src[slen])
        slen++;

    if (dlen == dstsize)
        return dstsize + slen;

    i = 0;
    while (src[i] && (dlen + i + 1) < dstsize)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    if (dlen + i < dstsize)
        dst[dlen + i] = '\0';

    return dlen + slen;
}
