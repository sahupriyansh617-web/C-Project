#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}


int fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == 0) return a;
    if (n == 1) return b;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int power(int base, int exp) {
    int result = 1;

    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {

    int n, base, exp;

    
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    printf("Factorial = %d\n", factorial(n));

    
    printf("Enter term number for Fibonacci: ");
    scanf("%d", &n);
    printf("Fibonacci term = %d\n", fibonacci(n));

    
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("Power = %d\n", power(base, exp));

    return 0;
}
