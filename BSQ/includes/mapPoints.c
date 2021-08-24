#include <stdio.h>

int	mapPoints(char yx[10][25], char *buffer)
{
	int		i;
	int		x;
	int		y;
	int		points;
	int		bestpoint;
	int		n;
	int	error;
	int	j;

	i = 0;
	y = 0;
	bestpoint = 0;
	x = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 27)
		{
			points = 0;
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
						if (yx[y + j][x + i] != buffer[1])
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
				printf("the left corner is at yx[%d][%d] and as %d * %d char\n", y, x, bestpoint - 2, bestpoint - 2);
			}
			x++;
		}
		y++;
	}
	return (1);
}
