/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanmallett <nathanmallett@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:13:45 by nathanmalle       #+#    #+#             */
/*   Updated: 2022/04/07 14:13:50 by nathanmalle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# define FT_PRINTF_H

    typedef struct t_struct
    {
        int	i;
        int	str;
        va_list	args;
    }	t_struct;

    int			ft_printf(const char *str, ...);
    void        switch_cases(const char *str, t_struct *stack);
    int 		str_len(int ptr);
    int 		ft_putchar(char c);
    int 		ft_putstr(char *str);
    int 		ft_putnbr(int n);
    int 		ft_putnbr_unsigned(unsigned int n);
    int 		ft_put_hex(unsigned long long hex, const int type);
    int         ft_put_ptr(int ptr);
    int         ft_put_addr(void *ptr);
#endif