#ifndef LASTCHANGE_H
    #define LASTCHANGE_H "lastChange.h"
#endif

int	lastChange(char yx[g_globalY][g_globalX], int y, int x, int w, char *element)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < w)
	{
		i = 0;
		while (i < w)
		{
			yx[y + j][x + i] = element[2];
			i++;
		}
		j++;
	}
	return (1);
}
