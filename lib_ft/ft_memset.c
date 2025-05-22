/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:24:29 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/21 16:42:28 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *ptr, int x, unsigned int n)
{
    unsigned char *p = (unsigned char *)ptr;
    while (n > 0)
    {
        *p = (unsigned char)x;
        p++;
        n--;
    }
    return ptr;
}
