/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:30:14 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/12 21:03:12 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, commenT tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	i = 0;

	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		if ((str[i - 1] > 31 && str[i - 1] < 48) || (str[i -1] == '\0'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}	i++;
	}
	return str;
}

