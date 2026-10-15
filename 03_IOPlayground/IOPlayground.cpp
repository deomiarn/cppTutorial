#include <iostream>

void writeConsoleContents()
{
    int x{5};

    std::cout << x << " Hello World";
    std::cout << "Hi!" << std::endl; // std::endl is inefficient because it flushes the buffer every single time
    std::cout << "My name is Arnel.";
    std::cout << "x is equal to: " << x << '\n'; // \n doesn't flush the buffer
}

void readConsoleContents()
{
    std::cout << "Write numbers: ";

    int x{}, y{};

    std::cin >> x >> y;

    std::cout << "You entered " << x << " and " << y << '\n';
}

// Answering Question #2 from learncpp.com chapter 1.5
void answerQuestionTwo() {
    std::cout << "Enter three numbers: ";

    int x{}, y{}, z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
}

int main()
{
    writeConsoleContents();
    readConsoleContents();
    answerQuestionTwo();

    return 0;
}
