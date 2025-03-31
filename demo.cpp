#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

int main()
{

    int response = getValue();
    
    printDouble(response);

    return 0;
}


