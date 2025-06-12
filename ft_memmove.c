/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:17:28 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:37:32 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)to;
	src = (const unsigned char *)from;
	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		i = 0;
		while (i < numBytes)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = numBytes;
		while (i-- > 0)
			dest[i] = src[i];
	}
	return (to);
}
