/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:00:08 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/16 16:00:08 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:27:54 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/16 12:27:54 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:13:10 by nmallett          #+#    #+#             */
/*   Updated: 2021/09/15 15:44:15 by nmallett         ###   ########.fr       */
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
char    *ft_substr(char const* s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char	*ft_strnew(size_t size);

int     ft_akaCheckBeginningStr(char const *s1, char const *set);
int     ft_akaCheckLastStr(char const *s1, char const *set);


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

char* ft_substr(char const* s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char* sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
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

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (!(ptr = (char *) malloc(sizeof(char) * size + 1)))
		return (NULL);
	ptr[size] = '\0';
	while (size--)
		ptr[size] = '\0';
	return (ptr);
}

int    ft_akaCheckBeginningStr(char const *s1, char const *set)
{
    int     i;
    int     s;
    int     result;
    char    *s1Ex;
    char    *setEx;

    s1Ex = (char *) s1;
    setEx = (char *) set;
    i = 0;
    s = 0;
    result = -1;

    while (i < ft_strlen(s1Ex))
    {
        while (s < ft_strlen(setEx))
        {
            if (s1Ex[i] == setEx[s])
            {
                result++;
                s = 0;
                break;
            }
            s++;
        }
        i++;
    }
    
    return (result);
}

int     ft_akaCheckLastStr(char const *s1, char const *set)
{
    int     i;
    int     s;
    int     result;
    char    *s1Ex;
    char    *setEx;

    s1Ex = (char *) s1;
    setEx = (char *) set;
    i = ft_strlen(s1Ex);
    s = 0;
    result = -1;

    //printf("Results of the trim for the end of the string\n");

    // Let's start at the end of the string
    while (i >= 0)
    {
        while (s < ft_strlen(setEx))
        {
            if (s1Ex[i - 1] == setEx[s])
            {
                //printf("found\n");
                result++;
                s = 0;
                break;
            }
            s++;
        }
        i--;
    }

    return (result);
}


char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    char    *s1Ex;
    char    *setEx;
    int     checkResult[2]; // 0 = beginning | 1 = last
    char    *ptr_result;

    // Convert our const to normal chars so we can pass them into functions later on
    s1Ex = (char *) s1;
    setEx = (char *) set;

    // Just a safe check to make sure our parameters are not NULL, if so, return null
    if (s1Ex == NULL || setEx == NULL)
        return (0);

    // Let's allocate just enough addresses to the pointer we are going to return
    // Make it habit to use your ft_calloc to allocate just enough memory, we dont need 
    // ...a airbnb of 12 rooms if we are just 2 peoples, right?
    ptr_result = (char *) ft_calloc(ft_strlen(s1Ex), sizeof(char *));
    // Let's store the tables that we need to trim from the original string
    checkResult[0] = ft_akaCheckBeginningStr(s1Ex, setEx);
    checkResult[1] = ft_akaCheckLastStr(s1Ex, setEx);

    // Let's check if there's anything to even trim?
    /*
    if (checkResult[0] == -1 || checkResult[1] == -1)
        return (ft_strnew(0)); // If the result is -1, just return an empty string in a pointer */

    // Beginning of the string
    int n = 0;
    int s = 0;
    while (n <= ft_strlen(s1Ex))
    {
        if (checkResult[0]+1 < n)
        {
            ptr_result[s] = s1Ex[n - 1];
            s++;
        }
        n++;
    }

    int fullstringLength = ft_strlen(s1Ex);
    int wherearewe = 0;

    while (fullstringLength >= wherearewe)
    {
        if (checkResult[1]+1 > wherearewe)
        {
            ptr_result[fullstringLength - checkResult[0]-2] = '\0';
        }
        wherearewe++;
        fullstringLength--;
    }
    return (ptr_result);

}

#endif
