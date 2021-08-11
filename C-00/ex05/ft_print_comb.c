/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:35:38 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/11 18:21:07 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int a);
void	ft_print_nums(int a, int b, int c);

void	ft_print(int a)
{
	char	*chiffre;

	chiffre = "0123456789";
	write(1, chiffre + a, 1);
}

void	ft_print_nums(int a, int b, int c)
{
	ft_print(a);
	ft_print(b);
	ft_print(c);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_nums(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}
