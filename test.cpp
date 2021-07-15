#include <iostream>

int main() {

    int number, sum;
    std::cout << "Enter positive natural number: ";
    std::cin >> number;
    sum = number * (1 + number) / 2;
    std::cout << sum << std::endl;
}
