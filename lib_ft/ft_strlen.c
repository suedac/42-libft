/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:24:03 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 11:44:51 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *str)
{
    size_t i = 0;
    if(str == 0)
        return 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
