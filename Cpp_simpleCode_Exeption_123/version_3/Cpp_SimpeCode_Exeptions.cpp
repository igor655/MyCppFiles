// Cpp_SimpeCode_Exeptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lesson 123
//https://www.youtube.com/watch?v=wCUl7yTHWq8&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=142

#include"stdafx.h" 


void foo(int value)
{
	if (value < 0)
	{
		throw exception();
	}

	cout << "int value = " << value << endl;
}
int main(int argc, char* argv[])
{
	try
	{
	foo(-6);
	}
	catch (exception& ex)
	{
		cout << "an exeption has been cought, value = " << ex.what() << endl;
	}
	//system("pause");
	cin.get();
	return 0;
}
 