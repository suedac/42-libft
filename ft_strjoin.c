/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:15:56 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:45:53 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*concatenated;
	size_t	i;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	concatenated = malloc(lens1 + lens2 + 1);
	if (!concatenated)
		return (0);
	i = 0;
	while (i < lens1)
	{
		concatenated[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		concatenated[i] = s2[i - lens1];
		i++;
	}
	concatenated[i] = '\0';
	return (concatenated);
}
