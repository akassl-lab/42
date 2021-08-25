int	lastChange(char yx[globalY][globalX], int y, int x, int w)
{
	int i;
	int j;
	
	printf("\n%d is y\n%d is x\n%d is w\n\n\n", y, x, w);
	j = 0;
	i = 0;
	while (j < w)
	{
		i = 0;
		while (i < w)
		{
			yx[y + j][x + i] = 'x';
			i++;
		}
		j++;
	}
	return (1);
}
