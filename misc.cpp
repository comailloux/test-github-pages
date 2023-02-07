#include <iostream>

#include "misc.h"


void func1()
{
    std::cout << "func1" << std::endl;
}

void func1()
{
    std::cout << "func2" << std::endl;
}

void func1()
{
    std::cout << "func3" << std::endl;
}

class1::class1(int a, int b)
{
    static_cast<void>(a);
    static_cast<void>(b);
    std::cout << "ctor class1" << std::endl; 
}

class1::~class1()
{
    std::cout << "dtor class1" << std::endl;
}

void class1::method1()
{
    std::cout << "method1 of class1" << std::endl;
}


class2::class2()
{
    std::cout << "ctor class2" << std::endl; 
}

class2::~class2()
{
    std::cout << "dtor class2" << std::endl;
}

std::string class2::method2(int a, int b)
{
    return std::string();
}
