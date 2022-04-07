/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanmallett <nathanmallett@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:14:07 by nathanmalle       #+#    #+#             */
/*   Updated: 2022/04/07 14:14:08 by nathanmalle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ft_printf.h"


    int     ft_putnbr(int n)
    {
        int i;

        i = 0;
        if (n == -2147483648)
            i += ft_putstr("-2147483648");
        else if (n < 0)
        {
            i += ft_putchar('-');
            i += ft_putnbr(-n);
        }
        else if (n <= 9)
            i += ft_putchar(n + '0');
        else
        {
            i += ft_putnbr(n / 10);
            i += ft_putnbr(n % 10);
        }
        return(i);
    }

    int 	ft_putnbr_unsigned(unsigned int n)
    {
        int     i;

        i = 0;
        if (n < 0)
        {
            i += ft_putchar('-');
            i += ft_putnbr_unsigned(-n);
        }
        else if (n <= 9)
            i += ft_putchar(n + '0');
        else
        {
            i += ft_putnbr_unsigned(n / 10);
            i += ft_putnbr_unsigned(n % 10);
        }
        return(i);
    }

    int 	ft_put_hex(unsigned long long hex, const int type)
    {
        int i;

        i = 0;
        if (hex >= 16)
        {
            i += ft_put_hex(hex / 16, type);
            i += ft_put_hex(hex % 16, type);
        }
        else
        {
            if (hex <= 9)
                i += ft_putchar((hex + 48));
            else
                if (type == 1)
                    i += ft_putchar((hex - 10 + 97));
                else if (type == 2)
                    i += ft_putchar((hex - 10 + 65));
        }
        return (i);
    }

    int 	ft_put_addr(void *ptr)
    {
        uintptr_t	ptr2;
        int 		c;

        c = 0;
        ptr2 = (uintptr_t)ptr;
        c += ft_putstr("0x");
        c += ft_put_hex(ptr2, 1);
        return (c);
    }