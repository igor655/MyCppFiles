#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/


	cout << "Привет мир!!!!" << endl;

	string str;
	cout << "Введите строку: " << endl;
	cin >> str;
	cout << "Вы ввели :  ____" << str << endl;

	return 0;
}