/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:30:48 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 14:26:10 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *str, int character)
{   int i;
    i = 0;
    char *s = (char *)str;
    while(s[i] != 0)
        i++;
    while(i >= 0)
    {
        if((unsigned char)s[i] == (unsigned char)character)
            return &s[i];
        i--;
    }
    return 0;
}
