#include <stdio.h>

int main()
{
	int i, j, width, height;

	printf("Enter width: ");

	scanf("%d", &width);

	printf("Enter height: ");

	scanf("%d", &height);

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == width - 1) || (i == height - 1 && j == 0) || (i == height - 1 && j == width - 1))
			{
				printf("#");
			}
			else if (i == 0 || i == height - 1)
			{
				printf("-");
			}
			else if (j == 0 || j == width - 1)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
