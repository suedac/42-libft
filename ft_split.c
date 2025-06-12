/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:32:48 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 14:39:20 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_many(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **str, int current_word)
{
	int	i;

	i = 0;
	while (i < current_word)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	add_word(char **str, const char *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	str[0] = word;
	return (1);
}

static int	split_loop(char **str, const char *s, char c, int len_s)
{
	int	i;
	int	start;
	int	cur;
	int	wlen;

	i = 0;
	start = 0;
	cur = 0;
	while (i <= len_s)
	{
		if (s[i] == c || s[i] == '\0')
		{
			wlen = i - start;
			if (wlen > 0)
			{
				if (!add_word(str + cur, s, start, wlen))
					return (free_split(str, cur), 0);
				cur++;
			}
			start = i + 1;
		}
		i++;
	}
	str[cur] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		len_s;
	char	**str;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	str = malloc((how_many(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	if (!split_loop(str, s, c, len_s))
		return (0);
	return (str);
}
