/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:58:23 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:47:33 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*b;
	char			*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (*l == '\0')
		return (b);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] != '\0' && l[j] != '\0' && (i + j) < len)
		{
			if (b[i + j] != l[j])
				break ;
			j++;
		}
		if (l[j] == '\0')
			return (&b[i]);
		i++;
	}
	return (0);
}
