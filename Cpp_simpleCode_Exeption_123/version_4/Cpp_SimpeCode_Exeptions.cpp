// Cpp_SimpeCode_Exeptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lesson 123
//https://www.youtube.com/watch?v=wCUl7yTHWq8&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=142

#include"stdafx.h" 


void foo(int value)
{
	if (value < 0)
	{
		throw exception("exception message\n");
	}
	if (value == 1)
	{
		throw value;
	}

	if (value == 0 )
	{
		throw "value = 0 ";
	}
	cout << "int value = " << value << endl;
}
int main(int argc, char* argv[])
{
	try
	{
	foo(0);
	}
	catch (exception& ex)
	{
		cout << "an exeption has been cought, value = " << ex.what() << endl;
	}
	catch (int& ex)
	{

		cout << "an exeption has been cought, value = " << ex << endl;
	}

	catch (const char* ex)
	{

		cout << "an exeption has been cought, value = " << ex << endl;
	}



	//system("pause");
	cin.get();
	return 0;
}
 