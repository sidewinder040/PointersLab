// PointersLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void PassByValue(int value);
void PassByRef(int& value);

class Person
{
public:
    Person()
    {
    }

    ~Person()
    {
    }

private:

};


int main()
{
    int num1;
    int num;

    int& pNum = num; // Ref pointer

    num1 = 3;
    num = 5;
    std::cout << "Initial Values:"
        << std::endl;
    std::cout << "num1 is " << num1 << std::endl;
    std::cout << "num is " << num << std::endl;
    std::cout << "pNum is " << pNum << std::endl;
    // Passing num1 by value
    PassByValue(num1);
    std::cout << "Back in Main, num1 is now: "
        << num1
        << std::endl;

    // Passing pNum reference varialbe by reference
    PassByRef(pNum);
    std::cout << "Inside Main again pNum is now: "
        << pNum
        << std::endl;
    return 0;
}

void PassByValue(int value)
{
    std::cout << "In PassByValue function"
        << std::endl;
    std::cout << "The value inside this function is: "
        << value
        << std::endl;
    value++;
    std::cout << "Incrementing Value inside function... "
        << std::endl;
    std::cout << "Value inside the function is: "
        << value
        << std::endl;
    return;
}

void PassByRef(int& value)
{
    std::cout << "In PassByReference function"
        << std::endl;
    std::cout << "In function value is: "
        << value
        << std::endl;
    value += 50;
    std::cout << "Increasing reference variable inside function by 50"
        << std::endl;
    std::cout << "Value inside function is: "
        << value
        << std::endl;
    return;
}
