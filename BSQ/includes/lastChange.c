int	lastChange(char yx[globalY][globalX], int y, int x, int w, char *element)
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
