// CppProject4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
* Ravesli 61
* Урок №61. Структуры
Функция также может возвращать структуру (это один из тех немногих случаев,
когда функция может возвращать несколько переменных).
Например:
*/




#include"pch.h"
#include"MyLib.h"

//Create multifile  programm





int main()
{

    setlocale(LC_ALL, "ru");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Урок №61. Структуры " << endl;

    Point3D p3d = getZeroPoint();
    PrintPoint3D(p3d);

    cout << "\n=======================================================\n";
    cout << "Вложенные структуры\n\n";

    Company company{ {1, 35, 2500.90}, 3 };
    company.info();

   


  

    
    cout << "\n=======================================================\n";
    cout << "Нажмите любую клавишу для выхода\n";
    cin.get();
    return 0;
}





