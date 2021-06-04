#include <iostream>

void Add(int a, int b, int &result) {
    result = a+b;
}

void Factorial(int a, int &result) {
    result = 1;
    for(; a > 0; --a) {
        result *= a;
    }
}

void Swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int a = 5;
    int b = 10;
    int result = 0;

    Add(a, b, result);
    std::cout << "Add " << result << '\n';

    Factorial(a, result);
    std::cout << "Factorial " << result << '\n';

    Swap(a,b);
    std::cout << "Swap " << a << ' ' << b << '\n';


    return 0;
}