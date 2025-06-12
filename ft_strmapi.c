/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:49:42 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:47:06 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size_s;
	char			*map;

	i = 0;
	size_s = ft_strlen(s);
	map = malloc(size_s * sizeof(char) + 1);
	if (!map)
		return (0);
	while (i < size_s)
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[size_s] = '\0';
	return (map);
}
