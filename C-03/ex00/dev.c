#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("Value of Fonction: %d\n", ft_strcmp("test", "aes"));
	printf("Native Value: %d", strcmp("test", "aes"));
	return 0;
}

int		ft_strcmp(char *s1, char *s2)
{
	int 	i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return -1;
		if (s1[i] > s2[i])
			return 1;
		i++;
	}
	return 0;
}
