#include "add.hpp"

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int getValue();
void printDouble(int num);

int main()
{
    int response = getValue();
    
    printDouble(response);

    std::cout << add(4, 5);

    return 0;
}


int getValue()
{
    std::cout << "Enter an integer: ";
    int input = 0;
    std::cin >> input;

    return input;
}

void printDouble(int num)
{
    std::cout << num << " doubled is " << num * 2 << '\n';
}
