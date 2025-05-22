/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:57:09 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/20 15:15:08 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *first, char *second, int size)
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

