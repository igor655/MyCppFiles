﻿// CppProject4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Struct Test




#include"pch.h"


 struct Employee
{
    char name[30];
    char surname [30];
    int age;

    void print()
    {
        cout << "Name = " << name << endl;
        cout << "Surname = " << surname << endl;
        cout << "Age = " << age << endl;
    }

} Worker;  //Worker variable name

 typedef struct TTT
 {
     char name[40];
     short old;
 }Data;


 // Способы объявления структур
 //Ways to declare structures


int main()
{

    setlocale(LC_ALL, "ru");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    cout << "Ways to declare structures" << endl;
    cout << "Способы объявления структур" << endl;
    cout << "\n=======================================================\n";

    Employee e1 = { "Peter", "Jonson", 34 };


    cout << e1.name << endl;
    cout << e1.surname << endl;
    cout << e1.age << endl;

   //struct  Employee e2; //or
     Employee e2;
    strcpy_s(e2.name, "Grisha");
    strcpy_s(e2.surname, "Михалков");
    e2.age = 32;

    
    e2.print();


    strcpy_s(Worker.name, "Василий");
    strcpy_s(Worker.surname, "Чапаев");
    Worker.age = 57;
    Worker.print();


    //

    Data d1;
    strcpy_s(d1.name, "Henry");
    d1.old = 43;


    TTT d2;
    d2.old = 12; strcpy_s(d2.name, "Juanes");

    
    cout << "\n=======================================================\n";
    cout << "Нажмите любую клавишу для выхода\n";
    cin.get();
    return 0;
}




