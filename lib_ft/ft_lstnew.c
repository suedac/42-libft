/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:49:14 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/28 11:30:35 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *newNode;
    newNode = malloc(sizeof(t_list));
    if(!newNode)
        return 0;
    newNode->content = content;
    newNode->next = 0;
    return newNode;
}
