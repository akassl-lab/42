/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:20:03 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 18:28:17 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "includes/libs.h"
#include "includes/checkSquare.h"

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
	char	*buffer;
	int		fileContent;

	argsc = argsc - 1;
	while (totalArguFounds <= argsc)
	{
		buffer = malloc (sizeof (char* ));
		fileContent = aka_readFile(buffer, argv[totalArguFounds+1]);
		if (fileContent != -1)
		{
			g_globalX = calculateTotalLength(buffer, fileContent);
			g_globalY = calculateTotalLines(buffer, fileContent);
			if (aka_canCreateSquare(fileContent, buffer) != 1)
				printf("error couldnt create square");
		}
		free(buffer);
		totalArguFounds++;
	}
}
