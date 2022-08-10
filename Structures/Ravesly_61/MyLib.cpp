#include "MyLib.h"
#include"pch.h"

Point3D getZeroPoint()
{
    Point3D temp{ 0.0,0.0,0.0 };

    return temp;

}

void PrintPoint3D(Point3D p3d)
{
    cout << "x = " << p3d.x << " " << " y = " << p3d.y << " " <<
        " z = " << p3d.z << endl;
}

void Company::info()
{
    cout << "CEO.age " << CEO.age << endl;
    cout << "CEO.id " << CEO.id << endl;
    cout << "CEO.salary " << CEO.salary << endl;
    cout <<"numberOfEmployees " << numberOfEmployees << endl;

}
