/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:00:08 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/06 14:03:54 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <unistd.h>
# include <stdlib.h>


char	*ft_strrev(char *str);
char	*ft_strcpy(char *dest, char *src);

void    ft_putstr(char *str);

int     ft_isalpha(char *str);
int     ft_isdigit(char *str);
int     ft_isalnum(char *str);
int     ft_isascii(char *str);
int     ft_isprint(char *str);
int     ft_strlen(char *str);

void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *str, size_t n);
void    *ft_memcpy(void *dest, const void * src, size_t n);
void    *ft_memmove(void *str1, const void *str2, size_t n);

size_t  ft_strlcpy(char * dest, const char * src, size_t size);
size_t  ft_strlcat(char * dest, const char *src, size_t size );

int     ft_atoi(char *str);

char	*ft_toupper(char *str);
char	*ft_strlowcase(char *str);

int	    ft_strncmp(char *s1, char *s2, unsigned int n);

char    *ft_strchr(const char *str, int n);
char    *ft_strrchr(const char *str, int n);

void    *ft_memchr(const void *str, int n, size_t n2);

int     memcmp(const void *str1, const void *str2, size_t n);

char	*ft_strnstr(char *str, char *to_find, size_t len);

void	*ft_calloc(size_t count, size_t size);

char    *ft_strdup(char *s);
char    *ft_substr(char const* s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_strnew(size_t size);
char	**ft_split(char const *s, char c);

int		ft_intlength(int n);
int 	int_to_ascii(int n);

char	*ft_itoa(int n);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *str, int fd);
void    ft_putendl_fd(char *str, int fd);

#endif
