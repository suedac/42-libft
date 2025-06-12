/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:03:43 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:46:35 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	char	*s;

	i = 0;
	src_len = 0;
	s = (char *)src;
	while (s[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	while (i < size - 1 && s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
