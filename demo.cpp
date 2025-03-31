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

int main()
{

    int num = getValue();
    
    std::cout << num << " doubled is " << num * 2 << '\n';

    return 0;
}


