#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << "Enter two numbers: ";

    int x{}, y{};
    std::cin >> x >> y;

    std::cout << "The result of the function \"add\" is -> " << add(x, y);  
}
