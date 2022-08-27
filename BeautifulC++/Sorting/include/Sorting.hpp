#pragma once

#include <string>
using namespace std;

class Employee
{
    string first;
    string last;
    int sal;

public:
    Employee(std::string first, std::string last, int sal) : first(first), last(last), sal(sal){};

    int getSal()
    {
        return sal;
    }

    string getSortingName()
    {
        return last + ", " + first;
    }
};