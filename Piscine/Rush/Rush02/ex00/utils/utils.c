/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:13:18 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/21 13:01:17 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void     ft_putchar(char *str);
extern int      ft_isdigit(char *str);
extern int      ft_atoi(char *str);
extern char	    *ft_strstr(char *str, char *to_find);
extern int		*t_ultimate_div_mod(int *a, int *b);
extern int		ft_split2numbers(int a, int b);

void    ft_putchar(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
        write(1, &str[i++], 1);
}

int    ft_isdigit(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
        if (str[i] < 48 || str[i++] > 57)
            return (0);
    return (1);
}

int ft_atoi(char *str)
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

char	*ft_strstr(char *str, char *to_find)
{
	int		istr;
	int		ito_find;

	istr = 0;
	ito_find = 0;
	while (str[istr] != '\0')
	{
		ito_find = 0;
		while (to_find[ito_find] == str[istr])
		{
			return ((str - (ito_find - istr)));
			ito_find++;
		}
		istr++;
	}	
	return (0);
}

int		*ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
	return(b);
}

int ft_split2numbers(int a, int b)
{
    while(a--)
        b/=10;
    return b%10;
}
