/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:39:05 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/03 15:28:58 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{   
    if(!s)
        return;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}
