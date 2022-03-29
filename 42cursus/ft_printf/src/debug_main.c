/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:30:32 by nmallett          #+#    #+#             */
/*   Updated: 2022/03/27 21:30:32 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define DEBUG_STRING "\nabcd 1234 test: %s | zzzz"
# define DEBUG_ARGUMENT "gddgdfggsgdsgf"

int	ft_printf(const char *str, ...);
int detect_params(const char *str);
int is_printf_params(const int ascii);
void switch_cases(const int ascii, ...);

int	main(int args, char **argv)
{
	ft_printf(DEBUG_STRING, DEBUG_ARGUMENT);
	printf(DEBUG_STRING, DEBUG_ARGUMENT);
	return (0);
}

// TODO: Shorten this in seperate functions to have a maximum of 25 lines per function
void switch_cases(const int ascii, ...)
{
	va_list args;
	va_start(args, ascii);
	char	*store_data[2];
	int 	i = 0;

	switch(ascii)
	{
		case 'c':
			store_data[0] = va_arg(args, char *);
			write(1, &store_data[0], 1);
			break;
		case 's':
			i = 0;
			store_data[1] = va_arg(args, char *);
			while(store_data[1][i] != '\0')
				write(1, &store_data[1][i++], 1);
			break;
		case 'p':
			break;
		case 'd':
			break;
		case 'i':
			break;
		case 'u':
			break;
		case 'x':
			break;
		case 'X':
			break;
		case '%': 
			break;
		default: {
		}
	}
	va_end(args);
}

int ft_printf(const char *str, ...)
{
	int	i = 0;
	int length_until_params = detect_params(str);

	va_list data;
	va_start(data, str);
	while(i <= length_until_params-2)
		write(1, &str[i++], 1);
	switch_cases(str[length_until_params], va_arg(data, char *));
	i = length_until_params+1;
	while(str[i] != '\0')
		write(1, &str[i++], 1);
	va_end(data);
	return (1);
}

int is_printf_params(const int ascii)
{
	if(!ascii || ascii == -1)
		return (0);
	if (ascii == 99 || ascii == 115 || ascii == 112 || ascii == 100 || \
		ascii == 105 || ascii == 117 || ascii == 120 || ascii == 88)
		return(1);
	else
		return(0);
}

int detect_params(const char *str)
{
	if(!str || str[0] == '\0')
		return (-1);
	int	i = 0;
	int flag_check[2] = {-1, -1};
	flag_check[0] = 0;
	while(str[i] != '\0')
	{
		if ((flag_check[0] == 1) && (is_printf_params(str[i]) == 1))
		{
			flag_check[1] = str[i];
			break;
		}
		if (flag_check[0] == 1)
			flag_check[0] = 0;
		if (str[i] == 37)
			flag_check[0] = 1;
		i++;
	}
	flag_check[0] = i;
	return (flag_check[0]);
}