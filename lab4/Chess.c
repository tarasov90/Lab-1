#include <stdio.h>
char Area[8][8] = {
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#'
};
void driver(int xcord, int ycord, char newArea[8][8]) 
{
	printf("driver started");
	system("cls");
	printf("f \n");
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			if (x == xcord && y == ycord)
				newArea[ycord][xcord] = '@';
			else
				newArea[y][x] = Area[y][x];
		}
	}
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			printf("%c", newArea[y][x]);
		}
		if (y < 7)
		{
			printf("\n");
		}
	}
	printf("\n");
}
int main(void) {

	char newArea[8][8];
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			newArea[y][x] = Area[y][x];
		}
	}

	int ycord = 7;
	int xcord = 6;
	newArea[ycord][xcord] = '@';
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			printf("%c", newArea[y][x]);
		}
		if (y < 8)
		{
			printf("\n");
		}

	}
	
	while (newArea[0][7] != '@')
	{
		char command[2];
		command[0] = getch('%c');
		command[1] = getch('%c');
		for (int i = 0; i < 2; i++)
		{
			printf("%d) %c \n",i, command[i]);
		}
		if (command[0] == 'f') {
			if (command[1] == 'l') {

				ycord -= 2;
				xcord -= 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord += 2;
					xcord += 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
			if (command[1] == 'r') {
				ycord -= 2;
				xcord += 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord += 2;
					xcord -= 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
		}
		if (command[0] == 'd') {
			if (command[1] == 'l') {
				ycord += 2;
				xcord -= 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord -= 2;
					xcord += 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
			if (command[1] == 'r') {
				ycord += 2;
				xcord += 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord -= 2;
					xcord -= 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
		}
		if (command[0] == 'l') {
			if (command[1] == 'u') {
				xcord -= 2;
				ycord -= 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					xcord += 2;
					ycord += 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
			if (command[1] == 'd') {
				xcord -= 2;
				ycord += 1;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					xcord += 2;
					ycord -= 1;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
		}
		if (command[0] == 'r') {
			if (command[1] == 'u') {
				ycord -= 1;
				xcord += 2;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord += 1;
					xcord -= 2;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
			if (command[1] == 'd') {
				ycord += 1;
				xcord += 2;
				if (ycord > 7 || ycord < 0 || xcord>7 || xcord < 0)
				{
					ycord -= 1;
					xcord -= 2;
					printf("OUT OF AREA!");
				}
				else
					driver(xcord, ycord, newArea);
			}
		}
	}
	printf("U r winner!!");
}

