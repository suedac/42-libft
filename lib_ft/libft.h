/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:38:40 by zgahrama          #+#    #+#             */
/*   Updated: 2025/05/25 13:27:10 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

typedef unsigned long size_t;
void *malloc(size_t size);

/*----------------------------------char manipulation---------------------------------------------------------------*/
int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_toupper(int	c);
int	ft_tolower(int	c);
/*----------------------------------string manipulation---------------------------------------------------------------*/
unsigned int ft_strlen(char *str);
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size);
int ft_strncmp(char *first, char *second, int size);
char *ft_strchr(char *str, char search_str);
char *ft_strcat(char *dest, char *src);
char *ft_strnstr (char *big, char *little, unsigned int len);
char *ft_strrchr(char * str, int character);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *s);
char *ft_strtrim(char const *s1, char const *set);
/*-------------------------------------memory manipulation-------------------------------------------------------------*/
void *ft_memset(void *ptr, int x, unsigned int n);
void *ft_memchr(const void *str, int c, unsigned int n);
int ft_memcmp (const void * ptr1, const void * ptr2, unsigned int num);
void *ft_memcpy(void *dest_str, const void * src_str, unsigned int n);
void *ft_memmove(void *to, const void *from, unsigned int numBytes);
void ft_bzero(void *s, unsigned int n);
void *ft_calloc(size_t nitems, size_t size);
/*--------------------------------------other---------------------------------------------------------------------------*/
int ft_atoi(const char *str);

#endif