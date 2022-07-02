
//#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<windows.h>
#include<clocale>
using namespace std;




unsigned  digitsCount(int n);

int showPartOfDigit(int value, int part);

int main()
{
	setlocale(LC_ALL, "Ru");

	/*
	
	A task:
    print the first n digits of the given number to the console
	*/
	int var{0};
	cout << "Entet int number: ";
	cin >> var;
	cout << "Enter number of digits to show: ";
	int part(0);
	cin >> part;
	
	int result = showPartOfDigit(var, part);
	cout << "Your namber is  " << result << endl;
	


	return 0;
}
unsigned  digitsCount(int n)
{
	unsigned count{1};

	while (n /= 10)
	{
		count++;
	}
	return count;
}

int showPartOfDigit( int value, int part)
{
	int result = value;
	unsigned digCount = digitsCount(value);


	if ( digCount < part && part >0)
	{
		
		cout << "number " << value << " is shorter than "  << part << " digits" << endl;
		return value;
	}
	if (part <= 0)
	{
		cout << "Can't display " << part << " digits\n";
		return value;
	}

	for (size_t i = 0; i < digCount - part; i++)
	{
		result = result / 10;
	}
	
	cout << "First " << part << " digits of number " << value <<
		" is: " << result << endl;

	
	return result;
}
