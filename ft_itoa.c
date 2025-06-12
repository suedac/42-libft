/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:15:16 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:26:15 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		digs;
	char	*num_str;
	long	nb;
	int		i;

	digs = digits(n);
	num_str = malloc(digs + 1);
	if (!num_str)
		return (0);
	num_str[digs] = '\0';
	nb = n;
	if (nb < 0)
	{
		num_str[0] = '-';
		nb = -nb;
	}
	i = digs - 1;
	if (nb == 0)
		num_str[0] = '0';
	while (nb > 0)
	{
		num_str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (num_str);
}
