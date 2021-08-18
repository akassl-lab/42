#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[60] = {'s' , 'a' , ',' , ' ' , 'c' , 'O' , 'M' , ' ' , '?' , ' ' , '4' , '2' , 'm' , ' ' , 'q' , 'u' , 'a' , '-' , 'd' , 'e' , ';' , ' ' , 'c' , 'i' , '+' , 'e', '+' , 'U'};

	ft_strcapitalize(str);
	printf("%s\n", str);
}