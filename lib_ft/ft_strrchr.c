/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:30:48 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/21 15:45:01 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, int character)
{   int i;
    i = 0;
    while(str[i] != 0)
        i++;
    while(i >= 0)
    {
        if(str[i] == character)
            return &str[i];
        i--;
    }
    return 0;
}
