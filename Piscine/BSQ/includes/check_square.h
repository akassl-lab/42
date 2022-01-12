/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:23:17 by nmallett          #+#    #+#             */
/*   Updated: 2021/08/25 21:07:09 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_SQUARE_H
# define CHECK_SQUARE_H

# include <unistd.h>
# include "map_points.h"

extern int	aka_canCreateSquare(int f, char *b, const int GY, const int GX);

int	checkElement(char *buffer, char *element)
{
	int	i[2];
	int	j;

	i[0] = 0;
	i[1] = 0;
	j = 0;
	while (buffer[i[0]] != '\n')
	{
		if (buffer[i[0]] >= '0' && buffer[i[0]] <= '9')
			i[1] = i[0];
		else
		{
			element[j] = buffer[i[0]];
			j++;
		}
		i[0]++;
	}
	return (1);
}

void	printMap(char yx[g_globalY][g_globalX])
{
	int	y;
	int	x;

	y = 1;
	while (y < g_globalY)
	{
		x = 0;
		while (x < g_globalX)
			write(1, &yx[y][x++], 1);
		write(1, "\n", 1);
		y++;
	}
}

void	overwrite(char yx[g_globalY][g_globalX])
{
	int	y;
	int	x;

	y = 0;
	while (y < g_globalY)
	{
		x = 0;
		while (x < g_globalX)
			yx[y][x++] = ' ';
		y++;
	}
}

void	buffToYx(char yx[g_globalY][g_globalX], int fC, char *buffer, char e[3])
{
	int	x;
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (buffer[i] != '\n')
		i++;
	while (i <= fC)
	{
		if (buffer[i] == '\n')
		{
			y++;
			x = 0;
		}
		if (buffer[i] == e[0])
			yx[y][x++] = e[0];
		if (buffer[i] == e[1])
			yx[y][x++] = e[1];
		if (buffer[i] == e[2])
			yx[y][x++] = e[2];
		i++;
	}
}

int	aka_canCreateSquare(int f, char *b, const int GY, const int GX)
{
	char	yx[GY][GX];
	char	element[3];

	checkElement(b, element);
	if (f < 1)
		return (0);
	overwrite(yx);
	buffToYx(yx, f, b, element);
	mapPoints(yx, element);
	printMap(yx);
	return (1);
}
#endif
