/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:06:59 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:42:15 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	strlen;

	i = 0;
	strlen = ft_strlen(s);
	while (i < strlen)
	{
		f(i, s);
		i++;
		s++;
	}
}
