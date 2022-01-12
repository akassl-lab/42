/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 21:17:13 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "includes/libs.h"
#include "includes/ft_libs.h"
#include "includes/check_square.h"

void	initiateMain(int argsc, char **argv, int totalArguFounds);

int	main(int argsc, char **argv)
{
	char	*b;
	int		f;

	if (argsc < 2)
	{
		b = malloc (sizeof(char *));
		f = aka_readFile(b, "example_file");
		if (f != -1)
		{
			g_globalX = calculateTotalLength(b, f);
			g_globalY = calculateTotalLines(b, f);
			aka_canCreateSquare(f, b, g_globalY, g_globalX);
		}
		else
		{
			aka_terminateProcess(b, 1);
			return (0);
		}
		free(b);
	}
	else
		initiateMain(argsc, argv, 0);
	return (0);
}

void	initiateMain(int argsc, char **argv, int totalArguFounds)
{
	char	*b;
	int		f;

	argsc = argsc - 2;
	while (totalArguFounds <= argsc)
	{
		b = malloc (sizeof(char *));
		f = aka_readFile(b, argv[totalArguFounds + 1]);
		if (f != -1)
		{
			g_globalX = calculateTotalLength(b, f);
			g_globalY = calculateTotalLines(b, f);
			aka_canCreateSquare(f, b, g_globalY, g_globalX);
		}
		else
		{
			aka_terminateProcess(b, 1);
		}
		free(b);
		totalArguFounds++;
	}
}
