#include <stdio.h>
#include <unistd.h>

void ft_print_int(int a);
void ft_print_nums(int a, int b);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_write(int *multiply, int *num);
void ft_print_comb3(void);
void ft_write2(int *value);

int main()
{
	ft_print_comb3();
	//ft_print_comb2();
    //ft_print_comb();
    return (0);
}

void ft_print(int a)
{
    char *chiffre = "0123456789";
    write(1, chiffre + a, 1);
}

void ft_print_nums(int a, int b)
{
    ft_print(a), ft_print(b);
}


void ft_write(int *multiply, int *num)
{
	// Testing code
	printf("%d%d %d%d, ", multiply[0], num[0], multiply[1], num[1]);
}

void ft_write2(int *value)
{
	
}

void ft_print_comb3(void)
{
	int a[2] = {0, 0};

	while (a[0] <= 99)
	{
		a[1] = a[0] + 1;
		while(a[1] <= 99)
		{
			ft_print(a[0]);

			++a[1];
		}
		++a[0];
	}

}

void ft_print_comb2(void)
{
	int num[2] = {0, 0};
	int countRows = 0;
	int multiply[2] = {0, 0};
	int test = 0;

	/* TODO: Clean up this mess and decrease lines before pushing */

	while (((num[1] <= 9 && multiply[1] <= 9) || (num[0] <= 9 && multiply[0] <= 99)) && (countRows < 100))
	{
		//if (countRows > 99)
		//	break;
	
		ft_write(multiply, num);
	
		//printf("%d%d %d%d, ", multiply[0], num[0], multiply[1], num[1]);



		if (num[1] == 9)
		{
			if (multiply[1] == 9)
			{
				multiply[1] = 0;
				
				if (num[0] == 9)
				{
					num[1] = 0;
					num[0] = 0;
					multiply[0]++;
				}
				else
				{
					num[1] = 0;
					num[0]++;
				}
				countRows++;
			}
			else
			{
				num[1] = 0;
				++multiply[1];
			}
		}
		else
		{

			num[1] += 1;
		}
	}
}	

void ft_print_comb(void)
{
	//
}
