/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:49:42 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 13:33:02 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned  int, char))
{
    unsigned int i = 0;
    unsigned int size_s = ft_strlen(s);
    char *map = malloc(size_s * sizeof(char) + 1);
    if(!map)
        return 0;
    while(i < size_s)
    {
        map[i] = f(i, s[i]);
        i++;
    }
    return map;
}
