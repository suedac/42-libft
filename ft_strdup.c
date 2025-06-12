/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:06:30 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 13:42:07 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ret;
	char	*temp;

	if (!s)
		return (0);
	len = ft_strlen(s) + 1;
	ret = malloc(len);
	if (!ret)
		return (0);
	temp = ret;
	while (*s)
		*temp++ = *s++;
	*temp = '\0';
	return (ret);
}
