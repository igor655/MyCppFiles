//Задание 1. Найти сумму цифр двузначого числа (от 0 до 99).Пример: 53 5+3 = 8.
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Программа считает сумму цифр чисел от 0 до 99\n";
	int a ;
	cout << "введите число от 0 до 99 \n";
	cin >> a;

	int dozens = a/10;
	int units = a%10;
	int sumOfFigures = dozens + units;

	cout << " сумма цифр числа " << a << ": " << dozens <<  " + " <<
		units <<  " = " <<  sumOfFigures << endl;
	

	

	 
	system("pause");// для запуска .exe , чтобы не закрывалась консоль
	return 0;
}