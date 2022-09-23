#include <stdio.h>

int	mutlak(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x);
}
int	bodon(int x, int y)
{
	if (x > y)
	{
		return (x);
	}
	return (y);
}
void	laneyazdir(int x)
{
	int f;
	int y;
	int i;
	int j;

	f = x - 1;
	y = (x * 2) - 1;
	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < y)
		{
			printf("%d", bodon(mutlak(f - i) + 1, mutlak(f - j) + 1));
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
int main()
{
	int g;

	printf("bir sayı giriniz:");
	scanf("%d", &g);
	laneyazdir(g);
}
