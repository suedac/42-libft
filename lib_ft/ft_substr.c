/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:11:38 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/22 15:25:10 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    char *temp;
    size_t i = 0;

    if (!s)
        return (0);
    if (start >= ft_strlen(s))
    {
        sub = malloc(1);
        if (!sub)
            return 0;
        sub[0] = '\0';
        return (sub);
    }
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start; 
    sub = malloc(len + 1);
    if (!sub)
        return 0;
    temp = sub;
    while (i < len && s[start + i] != '\0')
    {
        temp[i] = s[start + i];
        i++;
    }
    temp[i] = '\0';
    return (sub);
}