/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:30:42 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:24:06 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	size_t			total;
	void			*point;
	unsigned char	*p2p;

	i = 0;
	if (nitems && size && nitems > ((size_t)-1) / size)
		return (0);
	point = malloc(nitems * size);
	if (!point)
		return (0);
	total = nitems * size;
	p2p = (unsigned char *)point;
	while (i < total)
	{
		p2p[i] = 0;
		i++;
	}
	return (point);
}
