#include <stdio.h>

#include "lastChange.h"

int	mapPoints(char yx[g_globalY][g_globalX], char *element)
{
	int		i;
	int		x;
	int		y;
	int		bestpoint;
	int		n;
	int		error;
	int		j;
	int		position[3];

	y = 0;
	bestpoint = 0;
	while (y < g_globalY)
	{
		x = 0;
		while (x < g_globalX)
		{
			n = 1;
			j = 0;
			i = 0;
			error = 0;
			while (error == 0)
			{
				j = 0;
				while (j < n && error == 0)
				{
					i = 0;
					while (error == 0 && i < n)
					{
						if (yx[y + j][x + i] != element[0] || y + j + 1 > g_globalY || x + i + 1 > g_globalX)
							error = 1;
						i++;
					}
					j++;
				}
				n++;
			}
			if (n > bestpoint)
			{
				bestpoint = n;
				position[0] = y;
				position[1] = x;
				position[2] = bestpoint - 2;
			}
			x++;
		}
		y++;
	}
	lastChange(yx, position[0], position[1], position[2], element);
	return (1);
}
