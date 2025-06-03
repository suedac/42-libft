/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:50:11 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/02 16:03:28 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *current;
    t_list *nextt;
    if(!lst || !del)
        return;
    current = *lst;
    while(current)
    {
        nextt = current->next;
        del(current->content);
        free(current);
        current = nextt;
    }
    *lst = 0;
}
