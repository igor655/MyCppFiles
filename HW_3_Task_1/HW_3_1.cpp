//������� 1. ����� ����� ���� ���������� ����� (�� 0 �� 99).������: 53 5+3 = 8.
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "��������� ������� ����� ���� ����� �� 0 �� 99\n";
	int a ;
	cout << "������� ����� �� 0 �� 99 \n";
	cin >> a;

	int dozens = a/10;
	int units = a%10;
	int sumOfFigures = dozens + units;

	cout << " ����� ���� ����� " << a << ": " << dozens <<  " + " <<
		units <<  " = " <<  sumOfFigures << endl;
	

	

	 
	system("pause");// ��� ������� .exe , ����� �� ����������� �������
	return 0;
}