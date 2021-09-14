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

#include <stdio.h>
#include <unistd.h>


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
    {
        i++;
    }
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

#endif
