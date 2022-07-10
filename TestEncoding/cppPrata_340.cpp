// cppPrata_340.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include<fstream>
//#include<ios> //used to get stream size
//#include<limits> //used to get numeric limits
using namespace std;

static int a;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // неиницилизированные статические переменные
    // по умолчанию инициализируются 0

    cout << "неиницилизированные статические переменные\n" <<
        "по умолчанию инициализируются 0 \n";
    cout << "Static int a = " << a << endl;


    static string str = "some string";
    cout << "static string str = " << str << endl;

    static string str1;  //NULL
    cout << "static string str1 = " << str1 << endl;

    static bool bbb; // false (0)
    cout << "static bool bbb = " << bbb << endl;

    static float fVar; // 0.0
    cout << "static float fVar = " << fVar << endl;

   

return 0;
}




