/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:13:10 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/15 13:48:56 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H "libft.h"

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


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
char    *ft_substr(char *s, size_t pos1, size_t pos2);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);


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
        if (str[i] >= 0 && str[i] <= 127)
            return (1);
        i++;
    }
    return (0);
}

int    ft_isprint(char *str)
{
    int     i;

    i = 0;
    while (str[i] && str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            return (1);
        i++;
    }
    return (0);
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
    char    *destStr;
    char    *srcStr;
    destStr = (char *)  dest;
    srcStr = (char *)  src;

    srcLength = ft_strlen(srcStr);

    if (srcLength < size)
        ft_memcpy(destStr, srcStr, srcLength);
    return srcLength;
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t      i;
	size_t      stringLength[2];
    char    *destStr;
    char    *srcStr;

    destStr = (char *)  dest;
    srcStr = (char *)  src;
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
    char    *newStr;

    i = 0;
    newStr      = (char *) str;

    while (newStr[i] != '\0')
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i++;
    }
    return (0);
}

char    *ft_strrchr(const char *str, int n)
{
    size_t      i;
    char    *newStr;

    newStr      = (char *) str;
    i           = ft_strlen(newStr);
    while (i >= 0)
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i--;
    }
    return (0);
}

void    *ft_memchr(const void *str, int n, size_t n2)
{
    size_t      i;
    char    *newStr;

    i = 0;
    newStr      = (char *) str;
    while (newStr[i] != '\0' && i <= n2)
    {
        if (newStr[i] == n)
            return (&newStr[i]);
        i++;
    }
    return (0);
}

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t              i;
    unsigned    char    *strOne;
    unsigned    char    *strTwo;

    i                   = 0;
    strOne              = (unsigned char *) str1;
    strTwo              = (unsigned char *) str2;
    while (strOne[i] != '\0' && i <= n)
    {
        if (strOne[i] != strTwo[i])
            return (0);
        i++;
    }
    while (strTwo[i] != '\0' && i <= n)
    {
        if (strTwo[i] != strOne[i])
            return (0);
        i++;
    }
    return (1);
}

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int		i;
	int		ito_find;

	i = 0;
	ito_find = 0;
	while (str[i] != '\0' && i <= (int) len)
	{
		ito_find = 0;
		while (to_find[ito_find] == str[i])
		{
			return ((str - (ito_find - i)));
			ito_find++;
		}
		i++;
	}	
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
    char        *ptr;
    int         i;
    size_t      totalSize;

    totalSize = count * size;

    if(!(ptr = malloc(totalSize)))
        return (0);
    i = 0;
	while (totalSize--)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *) ptr);
}

char    *ft_strdup(char *s)
{
    int     i;
    char    *ptr;
    
    ptr = (char *) ft_calloc(ft_strlen(s), sizeof(char *));

    i = 0;
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    return(ptr);
}

char    *ft_substr(char *s, size_t pos1, size_t pos2)
{
    size_t    i[2];
    char      *ptr;
    
    ptr = (char *) ft_calloc(ft_strlen(s), sizeof(char *));
    i[0] = 0; // Initial String Loop
    i[1] = 0; // The string we need loop
    
    if(ptr == NULL)
        return(0);
    while (s[i[0]] != '\0')
    {
        // Only get the part of the string we are looking for
        if (i[0] >= pos1 && i[0] <= pos2)
        {
            // Once we have found the part of the string that we have found
            // Store it in the pointer and return it
            ptr[i[1]] = s[i[0] - 1];
            i[1]++; 
        }
        i[0]++;
    }
    return(ptr);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i[2];
    char    *ptr1; // return
    char    *ptr2; // s1
    char    *ptr3; // s2

    ptr2 = (char *) s1;
    ptr3 = (char *) s2;
    ptr1 = (char *) ft_calloc((ft_strlen(ptr2) + ft_strlen(ptr3)), sizeof(char *));

    if(ptr1 == NULL)
        return(0);
    i[0] = 0;
    i[1] = 0;    
    while (ptr2[i[0]] != '\0')
    {
        ptr1[i[1]] = ptr2[i[0]];
        i[0]++;
        i[1]++;
    }
    i[0] = 0;
    while (ptr3[i[0]] != '\0')
    {
        ptr1[i[1]] = ptr3[i[0]];
        i[0]++;
        i[1]++;
    }
    return(ptr1);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     i[3];
    char    *ptr1;
    char    *ptr2;
    char    *ptr3;

    ptr2 = (char *) s1;
    ptr3 = (char *) set;
    ptr1 = (char *) ft_calloc(ft_strlen(ptr2), sizeof(char *));
    i[0] = 0; // Loop the original string
    i[1] = 0; // Loop the characters in the set const var
    i[2] = 0; // Loop the new string to set the characters in it

    

    while (ptr2[i[0]] != '\0')
    {
        while (ptr3[1] != '\0')
        {
            // Segmentation Fault in this condition
            // TODO: To check
            if (ptr2[i[0]] == ptr3[i[1]])
            {
                ptr1[i[2]] = ptr2[i[1]];
            }
            i[1]++;
        }
        i[0]++;
        i[1] = 0;
        i[2]++;
    }
    return (ptr1);
    
}
#endif
