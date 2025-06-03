/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:47:33 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 13:52:22 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    char c;
    long nb = n;

    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    c = (nb % 10) + '0';
    write(fd, &c, 1);
}