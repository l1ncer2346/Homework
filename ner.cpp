#include <iostream>

int GetNumberLenght(int number) {

    int length = 0;

    while (number > 0) {
        number= number / 10;
        length += 1;
    }

    return length;
}


int main() {

    int UserInput;
    std::cout << "Enter your number: ";
    std::cin >> UserInput;
    int lenght_of_array = GetNumberLenght(UserInput);

    int arr[lenght_of_array];
    int cell_of_array = lenght_of_array - 1;

    for (int i = lenght_of_array - 1; i >= 0; --i) {
        arr[i] = UserInput % 10;
        UserInput = UserInput / 10;
    }
    //std::cout << arr;
    for (int i = 0; i < lenght_of_array; ++i) {
        std::cout << arr[i]<<std::endl;
    }

    return 0;
}

