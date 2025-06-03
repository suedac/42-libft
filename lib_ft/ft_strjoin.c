/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:15:56 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 13:31:54 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t lenS1 = ft_strlen(s1);
    size_t lenS2 = ft_strlen(s2);
    char *concatenated = malloc(lenS1 + lenS2 + 1);
    if (!concatenated)
        return 0;
    size_t i = 0;
    size_t j = 0;
    while(lenS1 > 0)
    {       
        concatenated[i] = s1[i];        
        lenS1--;
        i++;
    }
    while(lenS2 > 0)
    {
        concatenated[i] = s2[j];        
        lenS2--;
        i++;
        j++;
    }
    concatenated[i] = '\0';
    return concatenated;
}
