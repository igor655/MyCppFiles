//#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include<Windows.h>
//#include<conio.h>
//#include<bitset>
//#include <format>
#include <conio.h>
#include<ctime>
using namespace std;

const unsigned Y = 10; //10 строки
const unsigned X = 21; //21 столбцы

//void initField(char (&arr)[Y][X], int x, int y)
//void initField(char (*arr)[21], int x, int y)
//void initField(char arr [Y][X], int x, int y)
void initField(char arr[][X], int x, int y);


void showField(char(*arr)[21], int x, int y);




int main()
{	
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	


//================================================
	//Game Angri dog

	srand(time(NULL));
	
	char arr[Y][X];

	int dogX = 10, dogY = 5;
	char key;
	int appleX = 14, appleY = 7;
	int ox, oy; // ограничение движения собаки
	int score{0}; // score count apples



	do {

		system("cls");

		cout << "w: up, s: down, a: left, d: right, x: exit\n";

		initField(arr, X, Y);


		arr[dogY][dogX] = '@';
		arr[appleY][appleX] = '*';

		//вывод на экран
		

		showField(arr, X, Y);
		




		key = _getch();

		//dog moving

		ox = dogX;
		oy = dogY;

		if (key == 'w') { dogY--; }
		if (key == 's') { dogY++; }
		if (key == 'a') { dogX--; }
		if (key == 'd') { dogX++; }

		// ограничение движения собаки
		if (arr[dogY][dogX] == '#')
		{
			dogX = ox;
			dogY = oy;
		}

		// eat apple
		if (dogX == appleX && dogY == appleY)
		{
			appleX = rand() * 1.0 / RAND_MAX * (X-2) + 1;
			appleY = rand() * 1.0 / RAND_MAX * (Y -2) + 1;
			score++;
		}

		

	} while (key != 'x');

	cout << "score = " << score << endl;
	cout << "collected  " << score << " apples " << endl;
	
	_getch();
	system("pause");

	return 0;
}

//===================================

void initField(char arr[][X], int x, int y)
{



	for (size_t i = 0; i < y; i++)
	{
		for (size_t j = 0; j < x; j++)
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
			{
				arr[i][j] = '#';

			}
			else
			{
				arr[i][j] = ' ';
			}

		}


	}


}

//
void showField(char(*arr)[21], int x, int y)
{
	for (size_t i = 0; i < Y; i++)
	{
		for (size_t j = 0; j < X; j++)
		{
			cout << arr[i][j];

		}

		cout << endl;

	}

}

