#include <iostream>
#include <locale.h>
#include "func.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int act;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> act;
    if (act == 1) {
        std::cout << num1 << " + " << num2 << " = " << sum(num1, num2) << std::endl;
    } else if (act == 2) {
        std::cout << num1 << " - " << num2 << " = " << sub(num1, num2) << std::endl;
    } else if (act == 3) {
        std::cout << num1 << " * " << num2 << " = " << multi(num1, num2) << std::endl;
    } else if (act == 4) {
        if (num2 == 0) {
            std::cout << "На 0 делить нельзя.";
        } else {
            std::cout << num1 << " / " << num2 << " = " << divis(num1, num2) << std::endl;
        } 
    } else if (act == 5) {
        std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl;
    }
    return 0;
}