/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:24:03 by zgahrama          #+#    #+#             */
/*   Updated: 2025/04/08 14:49:50 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;
    if(str == 0)
        return 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
