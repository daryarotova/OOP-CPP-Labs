#include <iostream>
#include <string>
#include "lb1_func.h"

int main() {
    std::string input;
    std::cout << "Введите строку на английском языке: ";
    std::getline(std::cin, input);

    if (palindrom(input)) {
        std::cout << "Строка является палиндромом.\n";
    } else {
        std::cout << "Строка не является палиндромом.\n";
    }

    return 0;
}
