#ifndef MAP_POINTS_H
# define MAP_POINTS_H

# include <stdio.h>
# include "lastChange.h"

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
			{
				bne[3] = 0;
				while (bne[3] < bne[1] && bne[2] == 0)
				{
					ixz[0] = 0;
					while (bne[2] == 0 && ixz[0] < bne[1])
					{
						if (yx[ixz[2] + bne[3]][ixz[1] + ixz[0]] != element[0] || ixz[2] + bne[3] + 1 > g_globalY || ixz[1] + ixz[0] + 1 > g_globalX)
							bne[2] = 1;
						ixz[0]++;
					}
					bne[3]++;
				}
				bne[1]++;
			}
			if (bne[1] > bne[0])
			{
				bne[0] = bne[1];
				position[0] = ixz[2];
				position[1] = ixz[1];
				position[2] = bne[0] - 2;
			}
			ixz[1]++;
		}
		ixz[2]++;
	}
	lastChange(yx, position[0], position[1], position[2], element);
	return (1);
}
#endif
