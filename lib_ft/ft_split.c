/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:49:47 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 16:10:32 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int how_many(char const *s, char c)
{
    int count = 0;
    int in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            count++;
            in_word = 1;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}
static void	free_split(char **str, int current_word)
{
    int i = 0;
    while (i < current_word)
    {
        free(str[i]);
        i++;
    }
    free(str);
}
char **ft_split(char const *s, char c)
{   
    int i = 0;
    int j = 0;
    int start = 0;
    int current_word = 0;
    if(!s)
        return 0;
    int len_s = ft_strlen(s);
    char **str = malloc((how_many(s, c)  + 1 ) * sizeof(char *));
    while (i <= len_s)
    {
        if (s[i] == c || s[i] == '\0')
        {
            int word_length = i - start;
            if (word_length > 0)
            {
                str[current_word] = malloc(word_length + 1);
                if (!str[current_word]) 
                {
                free_split(str, current_word);
                return 0;
                }
                j = 0;
                while (j < word_length)
                {
                    str[current_word][j] = s[start + j];
                    j++;
                }
                str[current_word][j] = '\0';
                current_word++;
            }
        start = i + 1;
        }
    i++;
    }
str[current_word] = 0;
return str;
}
