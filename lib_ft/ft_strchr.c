/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:19:07 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/20 16:30:37 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(char *str, char search_str)
{
    char *pin = str;
    while(*str != '\0')
    {
        if(*str == search_str)
            return pin;
        str++;
        pin++;
    }
    *pin = 0;
    return pin;
}
