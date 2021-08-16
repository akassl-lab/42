/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:59:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/16 14:29:43 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
int compareString1(char *s1, char *s2);
int compareString2(char *s1, char *s2);
int compareString3(char *s1, char *s2);

int main(void)
{

	char *test[2] = {"a", "c"};

	printf("\n\nOur Function: %d", ft_strcmp(test[0], test[1]));
	printf("\n\nNative Function: %d", strcmp(test[0], test[1]));
	return (0);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return i;
}


int compareString1(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i])
	{
		if (s1[i] > s2[i])
			return 1;
		if (s1[i] < s2[i])
		{
			int test = i - 1;
			printf("a");
			return test;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (s1[i] > s2[i])
			return 1;
		if (s1[i] < s2[i])
		{
			int test = i - 1;
			printf("b");
			return test;
		}
		++i;
	}
	return result;
}

int compareString2(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return 1;
			if (s1[i] < s2[i])
			{
				int test = i - 1;
				printf("c");
				return test;
			}
			else
			{
				if(result != -1 && result != 1)
					return 0;	
			}
		}
		else
		{
			if (result != -1 && result != 1)
				return 0;
		}
		i++;
	}
	
	return result;
}

int compareString3(char *s1, char *s2)
{
	int i = 0;
	int result = 0;
	
	while (s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return 1;
			if (s1[i] < s2[i])
			{
				int test = i - 1;
				printf("d");
				return test;
			}
			else
			{
				if(result != 1 && result != 1)
					return 0;
			}
		}
		else
		{
			if (result != -1 && result != 1)
				return 0;
		}
		i++;
	}
	return 0;
}

int ft_strcmp(char *s1, char *s2)
{
	int		strLength[2];
	int		result;

	result = 0;
	strLength[0] = ft_strlen(s1);
	strLength[1] = ft_strlen(s2);
	if ( strLength[0] != strLength[1]) // String does not have same length so not equal
	{
		result = compareString1(s1, s2);
		if (result != 0)
			return result;	
	}
	else
	{
		result = compareString2(s1, s2);

		if (result != 0)
			return result;
	
		result = compareString3(s1, s2);
		
		if (result != 0)
			return result;
	}
	return (result);
}

