/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:03:43 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/20 12:49:52 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dst, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int src_len = 0;

    while (src[src_len] != '\0') {
        src_len++;
    }

    if (size == 0) {
        return src_len;
    }

    while (i < size - 1 && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return src_len;
}
