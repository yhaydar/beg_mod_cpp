#include "functions.h"

namespace Assignment1 {
    int Add(int *a, int *b) {
        return (*a + *b);
    }

    void AddVal(int *a, int *b, int *result) {
        *result = (*a + *b);
    }

    void Swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void Factorial(int *a, int *result) {
        *result = 1;
        for(; *a > 0; --(*a)) {
            *result *= *a;
        }
    }
}