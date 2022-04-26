/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:52:29 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:13:47 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_itoa_length(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_itoa_divide(int n)
{
	int		i;

	i = 1;
	while (n > 0)
	{
		i = i * 10;
		n--;
	}
	return (i);
}

static char	*ft_itoa_calloc(int n)
{
	char	*ptr;

	ptr = NULL;
	if (n <= -2147483648)
		ptr = ft_calloc(ft_itoa_length(n) + 2, sizeof(char *));
	else
		ptr = ft_calloc(ft_itoa_length(n) + 2, sizeof(char));
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		i[2];
	char	*ptr;

	ptr = ft_itoa_calloc(n);
	if (ptr == NULL)
		return (NULL);
	i[1] = ft_itoa_divide(ft_itoa_length(n) - 1);
	i[0] = 0;
	if (n == -2147483648)
		return (ft_strcpy(ptr, "-2147483648"));
	if (n < 0)
	{
		ptr[i[0]++] = '-';
		n = -n;
	}
	while (i[1] > 0)
	{
		ptr[i[0]] = (n / i[1] % 10 + 48);
		i[0]++;
		i[1] = i[1] / 10;
	}
	ptr[i[0]] = '\0';
	return (ptr);
}
