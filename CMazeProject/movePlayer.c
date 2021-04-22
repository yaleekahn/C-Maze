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
			if (locationY > 0 &&  arr[locationX][locationY - 1]  != '#')
				locationY--;
			break;
		}
		case 's':
		case 'S':
		{
			if (locationX < 4 && arr[locationX + 1][locationY] != '#')
				locationX++;
			break;
		}
		case 'd':
		case 'D':
		{
			if (locationY < 4 && arr[locationX][locationY + 1] != '#')
				locationY++;
			break;
		}
		case 'w':
		case 'W':
		{
			if (locationX > 0 && arr[locationX - 1][locationY] != '#')
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