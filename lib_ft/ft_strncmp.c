/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:57:09 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/25 20:35:01 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *first, const char *second, size_t size)
{ 
    if((*first == '\0' && *second == '\0') || size == 0)
        return (0);
    while(size > 1 && *first != '\0' && *second != '\0')
    {
        if(*first != *second)
        {
           return ((unsigned char)*first - (unsigned char)*second);
        }
    first++;
    second++;
    size--;
    }
    return ((unsigned char)*first - (unsigned char)*second);
}

