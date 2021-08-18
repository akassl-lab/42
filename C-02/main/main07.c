#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[3] = {'a' , 'b' , 'c'};

	ft_strupcase(str);
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
}
