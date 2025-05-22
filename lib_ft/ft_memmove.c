/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:17:28 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/22 13:23:03 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *to, const void *from, unsigned int numBytes)
{
    char *dest = (char*) to;
    const char *src = (const char*) from;
    while(numBytes>0)
    {
        *dest = *src;
        dest++;
        src++;
        numBytes--;
    }
    return to;
}
