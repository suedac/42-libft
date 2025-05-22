/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:40:16 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/22 12:02:06 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp (const void *ptr1, const void *ptr2, unsigned int num)
{
    const unsigned char *p1 = (const unsigned char *)ptr1;
    const unsigned char *p2 = (const unsigned char *)ptr2;
    while(num>0)
    {
        if(*p2 != *p1)
        {
            return *p1-*p2;
        }
        p1++;
        p2++;
        num--;
    }
    return 0;
}
