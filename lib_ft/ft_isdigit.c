/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:24:25 by zgahrama          #+#    #+#             */
/*   Updated: 2025/03/25 16:24:27 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
int ft_isdigit(int c)
{   
    if(c >= '0' && c <= '9')
        return c;
    return 0;
}
int main(void)
{
    char c = 'a';
    printf("%d\n", ft_isdigit(c));
    printf("%d", isdigit(c));
}