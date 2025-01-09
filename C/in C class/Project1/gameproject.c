#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

char Map[5][6] = {
	"#####",
	"# ^ #",
	"#C V#",
	"#D  #",
	"#####"
};

int carY = 1;
int carX = 1;
int HP = 100;

void HPup()
{
	HP = 100;
}

void randomMap()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (y == 0 || y == 4 || x == 0 || x == 4)
			{
				Map[y][x] = '#';
			}
			else
			{
				Map[y][x] = ' ';
			}
		}
	}

	srand(time(NULL));

	Map[rand() % 3 + 1][rand() % 3 + 1] = 'V';
	Map[rand() % 3 + 1][rand() % 3 + 1] = 'C';
	Map[rand() % 3 + 1][rand() % 3 + 1] = 'D';
	Map[rand() % 3 + 1][rand() % 3 + 1] = '^';
}

void PrintingMap()
{
	system("cls"); // 창 지우기
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (y == carY && x == carX)
			{
				printf("@");
			}
			else
			{
				printf("%c", Map[y][x]);
			}
		}
		printf("\n");
	}
	printf("HP: %d", HP);
}

int main()
{
	randomMap();
	while (1)
	{	
		system("color 1F");
		PrintingMap();
		if (GetAsyncKeyState(VK_UP))
		{
			if (carY > 0 && Map[carY-1][carX] != '#')
			{
				carY--;
			}
			if (Map[carY][carX] == '^')
			{
				HP -= 10;
				system("color 4F");
				carY++;
			}
		}
		else if (GetAsyncKeyState(VK_DOWN))
		{
			if (carY < 4 && Map[carY + 1][carX] != '#')
			{
				carY++;
			}
			if (Map[carY][carX] == '^')
			{
				HP -= 10;
				system("color 4F");
				carY--;
			}
		}
		else if (GetAsyncKeyState(VK_LEFT))
		{
			if (carX > 0 && Map[carY][carX - 1] != '#')
			{
				carX--;
			}
			if (Map[carY][carX] == '^')
			{
				HP -= 10;
				system("color 4F");
				carX++;
			}
		}
		else if (GetAsyncKeyState(VK_RIGHT))
		{
			if (carX < 4 && Map[carY][carX + 1] != '#')
			{
				carX++;
			}
			if (Map[carY][carX] == '^')
			{
				HP -= 10;
				system("color 4F");
				carX--;
			}
		}

		if (Map[carY][carX] == 'V' || HP == 0)
		{
			system("cls");
			system("color 0F");
			printf("\n\n\n\n\n\tGAMEOVER . . .\n\n\n\n\n");
			break;
		}

		if (Map[carY][carX] == 'D')
		{
			system("cls");
			printf("\n\n\n\n\n\tWIN!! (HP: %d)\n\n\n\n\n", HP);
			break;
		}

		if (Map[carY][carX] == 'C')
		{
			HPup();
			Map[carY][carX] = ' ';
		}

		Sleep(100);
	}

	

	return 0;
}