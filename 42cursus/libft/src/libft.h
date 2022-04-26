/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:00:08 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:17:53 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct t_struct
{
	int		i;
	int		str;
	va_list	args;
}	t_struct;

char	*ft_strrev(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_putstr(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size );
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strchr(const char *str, int n);
char	*ft_strrchr(const char *str, int n);
void	*ft_memchr(const void *str, int n, size_t n2);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *s2);
char	*ft_strnew(size_t size);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *buf, char *tmp, char *str);
char	*ft_start(char *str);
char	*ft_end(char *str);
int		ft_nl(char *str);
int		ft_printf(const char *str, ...);
void	switch_cases(const char *str, t_struct *stack);
int		str_len(int ptr);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_put_hex(unsigned long long hex, const int type);
int		ft_put_ptr(int ptr);
int		ft_put_addr(void *ptr);
int		is_printf_params(const int ascii);
#endif
