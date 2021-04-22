#include <stdio.h>
#define NUM 5

int movePlayer()
{
	char arr[NUM][NUM] =
	{
		{' ',' ','#','#','#'},
		{'#',' ','#','#','#'},
		{'#',' ',' ',' ','#'},
		{'#','#','#',' ',' '},
		{'#','#','#','#',' '}
	};
	char ch;
	int locationX = 0;
	int locationY = 0;

	int sizeX = 10;



	while (1)
	{
		for (int i = 0; i < NUM; i++)
		{
			for (int j = 0; j < NUM; j++)
			{
				if (i == locationX && j == locationY)
					printf("X");
				else
					printf("%c", arr[i][j]);
			}
			printf("\n");
		}

		ch = fgetc(stdin);

		switch (ch)
		{
		case 'a':
		case 'A':
		{
			if (locationY > 0 &&  arr[locationY - 1][locationX]  != '#')
				locationY--;
			break;
		}
		case 's':
		case 'S':
		{
			if (locationX < 4 && arr[locationY][locationX + 1] != '#')
				locationX++;
			break;
		}
		case 'd':
		case 'D':
		{
			if (locationY < 4 && arr[locationY + 1][locationX] != '#')
				locationY++;
			break;
		}
		case 'w':
		case 'W':
		{
			if (locationX > 0 && arr[locationY][locationX - 1] != '#')
				locationX--;
			break;
		}
		default:
			break;
		}


		system("cls");
	}


	return 0;
	return 0;
}