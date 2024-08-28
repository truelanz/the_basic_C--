#include <iostream>

int main() {
    int dividendo, divisor, resto, result;

    std::cout << "Digite o dividendo: ";
    std::cin >> dividendo;

    std::cout << "Digite o divisor: ";
    std::cin >> divisor;

    result = dividendo / divisor;
    resto = dividendo % divisor;

    std::cout << "O resto da divisão de " << dividendo << " por " << divisor << " é: " << resto << std::endl;
    std::cout << "A divisão de " << dividendo << " por " << divisor << " é: " << result << std::endl;

    return 0;
}