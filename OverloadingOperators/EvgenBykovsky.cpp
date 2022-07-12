#include"stdafx.h"
// EvgenBykovsky.cpp : This file contains the 'main' function. Program execution begins and ends there.

struct Vector3
{
    int x, y, z;

    Vector3()
    {

    }

    Vector3(int x, int y, int z): x(x), y(y), z(z) {}

    
//used friend function
    friend Vector3 operator + (Vector3& v1, Vector3& v2); // binary +
    friend Vector3 operator - (Vector3& v1, Vector3& v2); // binary -
    friend Vector3 operator * (Vector3& v1, Vector3& v2); // binary *
    friend Vector3 operator / (Vector3& v1, Vector3& v2); // binary /


    Vector3 operator = (const Vector3& v1);

    //Vector3 operator + ( Vector3& v1); // unary +
    // 
    // перегрузка оператора - через дружественную функцию
    //friend Vector3 operator - (  Vector3 v1); // unary -

    //перегрузка оператора - через член структуры
    Vector3 operator - ();// unary -
    

  

};

// binary +
Vector3 operator + (Vector3& v1, Vector3 &v2)
{
    return Vector3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
} 
//binari -
Vector3 operator - (Vector3& v1, Vector3& v2)
{
    return Vector3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
//binary *
Vector3 operator * (Vector3& v1, Vector3& v2)
{
    return Vector3(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
}
Vector3 operator / (Vector3& v1, Vector3& v2)
{
    return Vector3(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z);
}


Vector3 Vector3 :: operator = (const Vector3& v1)
{
    if (&v1 == this)
    {
        return *this;

    }
    return Vector3(this->x = v1.x, this->y = v1.y, this->z = v1.z);

}
/*Vector3 Vector3 :: operator + (Vector3& v1)
{
    return Vector3(v1.x * 1, v1.y * 1, v1.z * 1);
}*/

//   Vector3   operator - (Vector3 v1)
//{
//    //return Vector3(v1.x * -1, v1.y * -1, v1.z * - 1);
//    return Vector3(-v1.x, -v1.y, -v1.z);
//
//    /*v1.x = -v1.x;
//    v1.y = -v1.y;
//    v1.z = -v1.z;
//    return v1;*/
//}

Vector3 Vector3 :: operator - () // unary -
{
    Vector3 v(-x, -y, -z);


    return v;
}









int main()
{
    //setlocale(LC_ALL, "Russian");
    cout << "Правильно перегружаем все 49 операторов\n";

    Vector3 v1(10, 10, 10);
    Vector3 v2(20, 15, 30);
    Vector3 v3;

   

    //v3 =  v1;
    //v3 =  v1 + v2;
    //v3 =  v2 + v1;
    //v3 = v2 - v1;
    //v3 = v1 - v2;
    //v3 = v1 * v2;
    //v3 = v2 * v1;
    //v3 = v2 / v1;
    //v3 = v1 / v2;

    v3 = v2;
    v3 = - v3;
    //-v3;


    cout << "v3.x = " << v3.x << " " << "v3.y = " << v3.y << " " << "v3.z = " << v3.z << endl;


    //unary operator - . default realisation
    //int a = 5;
    ////a = -a;
    //-a;
    //cout << a << endl;



   


    //system("pause");
    return 0;
}

