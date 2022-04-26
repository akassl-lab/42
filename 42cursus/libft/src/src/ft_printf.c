/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:14:00 by nathanmalle       #+#    #+#             */
/*   Updated: 2022/04/26 12:14:06 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printf(const char *str, ...)
{
	t_struct	stack;

	stack.i = 0;
	stack.str = 0;
	va_start(stack.args, (char *)str);
	while (str[stack.i])
	{
		if (is_printf_params(str[stack.i]) == 1)
		{
			stack.i++;
			switch_cases(str, &stack);
		}
		else if (is_printf_params(str[stack.i]) == 2)
			stack.str += ft_putchar(str[stack.i]);
		else
			continue ;
		stack.i++;
	}
	va_end(stack.args);
	return (stack.str);
}

void	switch_cases(const char *str, t_struct *stack)
{
	char	currentchar;

	currentchar = (char) str[stack->i];
	if (currentchar == 'c')
		stack->str += ft_putchar(va_arg(stack->args, int));
	else if (currentchar == 's')
		stack->str += ft_putstr(va_arg(stack->args, char *));
	else if (currentchar == 'd' || currentchar == 'i')
		stack->str += ft_putnbr(va_arg(stack->args, int));
	else if (currentchar == 'u')
		stack->str += ft_putnbr_unsigned(va_arg(stack->args, unsigned int));
	else if (currentchar == 'p')
		stack->str += ft_put_addr(va_arg(stack->args, void *));
	else if (currentchar == 'x')
		stack->str += ft_put_hex(va_arg(stack->args, unsigned int), 1);
	else if (currentchar == 'X')
		stack->str += ft_put_hex(va_arg(stack->args, unsigned int), 2);
	else if (currentchar == '%')
		stack->str += write(1, "%", 1);
}

int	is_printf_params(const int ascii)
{
	if (!ascii || ascii == -1)
		return (0);
	if (ascii == 37)
		return (1);
	else if (ascii != 37)
		return (2);
	else
		return (0);
}

int	str_len(int ptr)
{
	size_t	length;

	length = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		length++;
	}
	return (length);
}