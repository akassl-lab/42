/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:18:35 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 17:24:29 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	printf("Result: %d", ft_str_is_lowercase("test"));
	return 0;
}

int ft_str_is_lowercase(char *str)
{
	int result = 1;

	while (*str)
	{
		if (*str < 97 || *str > 122)
			result = 0;
		if (*str == '\0')
			result = 1;
		str++;
	}	

	return result;
}
