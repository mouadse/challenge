
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

#include <unistd.h>

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == x - 1) || (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
				ft_putchar('o');
			else if (i == 0 || i == y - 1)
				ft_putchar('-');
			else if (j == 0 || j == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main()
{
	rush(50, 5);

	return 0;
}
