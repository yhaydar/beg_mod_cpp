#include "functions.h"
#include <iostream>

int main() {

    int *a = new int(5);
    int *b = new int(10);
    int *result = new int();

    *result = Assignment1::Add(a, b);
    std::cout << "Add " << *result << std::endl;

    Assignment1::AddVal(a, b, result);
    std::cout << "AddVal " << *result << std::endl;

    Assignment1::Swap(a, b);
    std::cout << "Swap " << *a << " " << *b << std::endl;

    Assignment1::Factorial(b, result);
    std::cout << "Factorial " << *result << std::endl;

    return 0;
}