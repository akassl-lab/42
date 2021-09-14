/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:42:27 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/14 11:42:27 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <stdio.h>
# include <unistd.h>


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


void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
        write(1, &str[i++], 1);
}

int    ft_isalpha(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if (str[i] < 65 || str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}

int    ft_isdigit(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}

int    ft_isalnum(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if ((str[i] < 48 || str[i] > 57) && (str[i] < 65 || str[i] > 122))
            return (0);
        i++;
    }
    return (1);
}

int    ft_isascii(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if (str[i] < 0 && str[i] > 127)
            return (0);
        i++;
    }
    return (1);
}

int    ft_isprint(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if (str[i] < 32 && str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}

int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
         i++;
    return (i);
}

void   *ft_memset(void *str, int c, size_t n)
{
    size_t          i;
    unsigned char   *newStr;

    i = 0;
    newStr = (unsigned char *) str;

    if (n <= 0)
        return ("Invalid Size Length");
    
    while (i < n)
        newStr[i++] = (unsigned char) c;

    return (newStr);
}

void    ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}

void    *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t              i;
    unsigned    char    *oldStr;
    unsigned    char    *newStr;

    i = 0;
    oldStr = (unsigned char *) dest;
    newStr = (unsigned char *) src;

    while (i < n)
    {
        oldStr[i] = newStr[i];
        i++;
    }
    return (oldStr);
}

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned    char    *oldStr;
    unsigned    char    *newStr;

    i = 0;
    oldStr = (unsigned char *)  src;
    newStr = (unsigned char *)  dest;

    if (src < dest)
        while (n--)
            newStr[n] = oldStr[n];
    else
        ft_memcpy(dest, src, n);

    return (newStr);
}

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t    srcLength;
    unsigned    char    *destStr;
    unsigned    char    *srcStr;

    destStr = (unsigned char *)  dest;
    srcStr = (unsigned char *)  src;

    srcLength = ft_strlen(srcStr);

    if (srcLength < size)
        ft_memcpy(destStr, srcStr, srcLength);
    return srcLength;
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t      i;
	size_t      stringLength[2];
    unsigned    char    *destStr;
    unsigned    char    *srcStr;

    destStr = (unsigned char *)  dest;
    srcStr = (unsigned char *)  src;
	stringLength[0] = ft_strlen(destStr);
	stringLength[1] = ft_strlen(srcStr);
	i = size;
	while (*destStr)
	{
		destStr++;
		if (i > 0)
			i--;
	}
	while (*srcStr && i > 1)
	{
		*destStr++ = *srcStr++;
		i--;
	}
	*destStr = '\0';
	if (size > stringLength[0])
		return (stringLength[0] + stringLength[1]);
	return (size + stringLength[1]);
}

int     ft_atoi(char *str)
{
    int i[2];

    i[0] = 0;
    i[1] = 1;
    
    if(*str == '-') 
    {
        i[1] = -1;
        str++;
    }
    
    while ((*str >= '0') && (*str <= '9')) 
    {
      i[0] = i[0] * 10;
      i[0] = i[0] + (*str - 48);
      str++;
    }
    return (i[1] * i[0]);
}

char	*ft_toupper(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char    *ft_strchr(const char *str, int n)
{
    size_t      i;
    unsigned    char    *newStr;

    i = 0;
    newStr      = (unsigned char *) str;

    while (newStr[i] != '\0')
    {
        if (newStr[i] == n)
            return ((char *) n);
        i++;
    }
    return (0);
}

char    *ft_strrchr(const char *str, int n)
{
    size_t      i;
    unsigned    char    *newStr;

    newStr      = (unsigned char *) str;
    i           = ft_strlen(newStr);
    while (i >= 0)
    {
        if (newStr[i] == n)
            return ((char *) n);
        i--;
    }
    return (0);
}

void    *ft_memchr(const void *str, int n, size_t n2)
{
    size_t      i;
    unsigned    char    *newStr;

    i = 0;
    newStr      = (unsigned char *) str;
    while (newStr[i] != '\0' && i <= n2)
    {
        if (newStr[i] == n)
            return ((char *) n);
        i++;
    }
    return (0);
}

#endif
