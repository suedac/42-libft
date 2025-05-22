/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:58:23 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/21 15:27:13 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(char *big, char *little, unsigned int len)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    if (*little == '\0')
        return big;
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] != '\0' && little[j] != '\0' && (i + j) < len)
        {
            if (big[i + j] != little[j])
                break;
            j++;
        }
        if (little[j] == '\0')
            return &big[i];

        i++;
    }

    return 0;

}