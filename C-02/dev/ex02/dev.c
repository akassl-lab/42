/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:38:15 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 17:16:55 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int	main(void)
{
	printf("Answer: %d\n", ft_str_is_alpha("test&$%%"));
	return 0;
}

int		ft_str_is_alpha(char * str)
{
	int		count;

	count = 1;
	while (*str)
	{		
		if (*str > 122 || *str < 97)
			count = 0;
		if (*str == '\0')
			count = 1;
		str++;
	}
	return (count);
}
