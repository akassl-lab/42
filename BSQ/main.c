/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 20:16:04 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "includes/libs.h"
#include "includes/check_square.h"

void	initiateMain(int argsc, char **argv, int totalArguFounds);

int	main(int argsc, char **argv)
{
	if (argsc < 2)
	{
	}
	initiateMain(argsc, argv, 0);
	return (0);
}

void	initiateMain(int argsc, char **argv, int totalArguFounds)
{
	char	*b;
	int		f;

	argsc = argsc - 1;
	while (totalArguFounds <= argsc)
	{
		b = malloc (sizeof(char *));
		f = aka_readFile(b, argv[totalArguFounds + 1]);
		if (f != -1)
		{
			g_globalX = calculateTotalLength(b, f);
			g_globalY = calculateTotalLines(b, f);
			if (aka_canCreateSquare(f, b, g_globalY, g_globalX) != 1)
				printf("error couldnt create square");
		}
		free(b);
		totalArguFounds++;
	}
}
