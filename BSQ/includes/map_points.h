/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_points.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:22:49 by bdion             #+#    #+#             */
/*   Updated: 2021/08/25 20:41:27 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_POINTS_H
# define MAP_POINTS_H

# include <stdio.h>
# include "lastChange.h"

void	mapPoints2(char yx[g_globalY][g_globalX], char *e, int i[3], int bne[4])
{
	bne[3] = 0;
	while (bne[3] < bne[1] && bne[2] == 0)
	{
		i[0] = 0;
		while (bne[2] == 0 && i[0] < bne[1])
		{
			if (yx[i[2] + bne[3]][i[1] + i[0]] != e[0])
				bne[2] = 1;
			if (i[2] + bne[3] + 1 > g_globalY)
				bne[2] = 1;
			if (i[1] + i[0] + 1 > g_globalX)
				bne[2] = 1;
			i[0]++;
		}
		bne[3]++;
	}
	bne[1]++;
}

void	pos(int bne[4], int ixz[3], int position[3])
{
	if (bne[1] > bne[0])
	{
		bne[0] = bne[1];
		position[0] = ixz[2];
		position[1] = ixz[1];
		position[2] = bne[0] - 2;
	}
}

int	mapPoints(char yx[g_globalY][g_globalX], char *element)
{
	int	ixz[3];
	int	bne[4];
	int	position[3];

	ixz[2] = 0;
	bne[0] = 0;
	while (ixz[2] < g_globalY)
	{
		ixz[1] = 0;
		while (ixz[1] < g_globalX)
		{
			bne[1] = 1;
			bne[3] = 0;
			ixz[0] = 0;
			bne[2] = 0;
			while (bne[2] == 0)
				mapPoints2(yx, element, ixz, bne);
			pos(bne, ixz, position);
			ixz[1]++;
		}
		ixz[2]++;
	}
	lastChange(yx, position, element);
	return (1);
}
#endif
