/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:13:02 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/26 12:13:04 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_extra(int nb, int n)
{
	if (n > 0)
		return (ft_recursive_factorial_extra(nb * n, n - 1));
	return (nb);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (ft_recursive_factorial_extra(nb, nb - 1));
}
