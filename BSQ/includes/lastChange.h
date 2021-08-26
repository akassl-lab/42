#ifndef LASTCHANGE_H
# define LASTCHANGE_H "lastChange.h"

int	lastChange(char yx[g_globalY][g_globalX], int x[3], char *e)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (j < x[2])
	{
		i = 0;
		while (i < x[2])
		{
			yx[x[0] + j][x[1] + i] = e[2];
			i++;
		}
		j++;
	}
	return (1);
}
#endif
