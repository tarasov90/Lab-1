#include "stdio.h"
#include <locale.h>
char Area[6][6] = {
		'#','#', '#', '*', '*', '#',
		'*','#', '#', '#', '#', '#',
		'#','#', '*', '*', '#', '#',
		'#','*', '#', '#', '#', '#',
		'#','*', '#', '*', '#', '#',
		'#','#', '#', '*', '#', '#',
};
void driver(int xcord,int ycord, char newArea[6][6]) {
	system("cls");
	printf("f \n");
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (x == xcord && y == ycord)
				newArea[ycord][xcord] = '@';
			else
				newArea[y][x] = Area[y][x];
		}
	}
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			printf("%c", newArea[y][x]);
		}
		if (y < 5)
		{
			printf("\n");
		}
	}
	printf("\n");
}
int main(void) {
	setlocale(LC_ALL, "Rus");
	
	enum States {
		f = 'f',
		b = 'b',
		r = 'r',
		l = 'l',
	};

	char newArea[6][6];
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			newArea[y][x] = Area[y][x];
		}
	}

	int ycord = 5;
	int xcord = 0;
	newArea[ycord][xcord] = '@';
	for (int y = 0; y<6;y++)
	{
		for (int x = 0; x<6; x++) 
		{
			printf("%c",newArea[y][x]);
		}
		if (y < 6)
		{
			printf("\n");
		}
		
	}
	char command;
	while (newArea[0][5] != '@')
	{
		command = getch("%c");
		switch (command)
		{
		case f:	
			ycord -= 1;
			if (ycord > 5 || ycord < 0 || xcord>5 || xcord < 0)
			{
				ycord += 1;
				break;
			}
			if (Area[ycord][xcord] == '*')
			{
				ycord += 1;
				break;
			}
			driver(xcord, ycord, newArea);
			break;
		case b:
			ycord += 1;
			if (ycord>5 || ycord<0 || xcord>5 || xcord<0)
			{
				ycord -= 1;
				break;
			}
			
			if (Area[ycord][xcord] == '*')
			{
				ycord -= 1;
				break;
			}
			driver(xcord, ycord, newArea);
			break;
		case l:
			xcord -= 1;
			if (ycord > 5 || ycord < 0 || xcord>5 || xcord < 0)
			{
				xcord += 1;
				break;
			}
			if (Area[ycord][xcord] == '*')
			{
				xcord += 1;
				break;
			}
			driver(xcord, ycord, newArea);
			break;
		case r:
			xcord += 1;
			if (ycord > 5 || ycord < 0 || xcord>5 || xcord < 0)
			{
				xcord -= 1;
				break;
			}
			if (Area[ycord][xcord] == '*')
			{
				xcord -= 1;
				break;
			}
			driver(xcord, ycord, newArea);
			break;
		};
	}
	printf("U r winner!!");
}

