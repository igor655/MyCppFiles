#pragma once

struct Point3D
{
    double x;
    double y;
    double z;
};

struct Employee
{
    short id;
    int age;
    float salary;
};

struct Company
{
    Employee CEO;
    int numberOfEmployees;

    void info();
};

Point3D getZeroPoint();

void PrintPoint3D(Point3D);
