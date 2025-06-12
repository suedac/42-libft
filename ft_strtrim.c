/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:49:42 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:48:04 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	str_start(char const *s1, char const *set)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = ft_strlen(s1);
	while (i < size)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static unsigned int	str_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*isim;
	int		i;

	if (!s1 || !set)
		return (0);
	start = str_start(s1, set);
	end = str_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	isim = malloc(end - start + 2);
	if (!isim)
		return (0);
	i = 0;
	while (start + i <= end)
	{
		isim[i] = s1[start + i];
		i++;
	}
	isim[i] = '\0';
	return (isim);
}
