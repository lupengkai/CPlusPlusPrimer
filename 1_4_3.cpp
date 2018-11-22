//
// Created by Kaka on 2018/11/15.
//
#include <iostream>

int main2() {
    int value = 0;
    while (std::cin >> value ) {
        if (value < 10) {
            std::cout << value << std::endl;
        }
    }

    return 0;
}

