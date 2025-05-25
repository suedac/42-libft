/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:06:30 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/23 15:50:15 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *malloc(size_t size);
char *ft_strdup(const char *s)
{   
    
    if(!s)
        return 0;
    char* cat = (char*)s;
    int num;
    num = ft_strlen((cat) + 1);
    char *ret = malloc(num);
    char *temp;
   
    temp = ret;
    while(*s != '\0')
    {
        *temp = *s;
        s++;
        temp++;
    }
    *temp = '\0';
    return ret;
}
