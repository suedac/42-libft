/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgahrama <zgahrama@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:38:40 by zgahrama          #+#    #+#             */
/*   Updated: 2025/06/04 12:43:50 by zgahrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
/*----------------------------------char manipulation---------------------------------------------------------------*/
int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_toupper(int	c);
int	ft_tolower(int	c);
/*----------------------------------string manipulation---------------------------------------------------------------*/
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int ft_strncmp(const char *first, const char *second, size_t size);
char *ft_strchr(const char *str, int search_str);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strnstr (const char *big, const char *little, size_t len);
char *ft_strrchr(const char * str, int character);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *s);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
char *ft_strjoin(char const *s1, char const *s2);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
/*-------------------------------------memory manipulation-------------------------------------------------------------*/
void *ft_memset(void *ptr, int x, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp (const void * ptr1, const void * ptr2, size_t num);
void *ft_memcpy(void *dest_str, const void * src_str, size_t n);
void *ft_memmove(void *to, const void *from, size_t numBytes);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nitems, size_t size);
/*--------------------------------------other---------------------------------------------------------------------------*/
int ft_atoi(const char *str);
char *ft_itoa(int n);
/*------------------------------------------bonuses---------------------------------------------------------------------*/
t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif