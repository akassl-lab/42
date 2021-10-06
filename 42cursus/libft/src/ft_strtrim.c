/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:53:33 by nmallett          #+#    #+#             */
/*   Updated: 2021/10/05 16:56:00 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static  int    ft_akaCheckBeginningStr(char const *s1, char const *set)
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

static  int     ft_akaCheckLastStr(char const *s1, char const *set)
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
	char	*s1Ex;
	char	*setEx;
	int		checkResult[2]; // 0 = beginning | 1 = last
	char	*ptr_result;

	s1Ex = (char *) s1;
	setEx = (char *) set;
	if (s1Ex == NULL || setEx == NULL)
		return (0);
	ptr_result = (char *) ft_calloc(ft_strlen(s1Ex), sizeof(char *));
	checkResult[0] = ft_akaCheckBeginningStr(s1Ex, setEx);
	checkResult[1] = ft_akaCheckLastStr(s1Ex, setEx);
	if (checkResult[0] == -1 || checkResult[1] == -1)
		return (ft_strnew(0)); // If the result is -1, just return an empty string in a pointer 
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