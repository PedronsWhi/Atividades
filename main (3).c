#include <stdio.h>

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a = 10;
    int b = 20;
    int c = maior(a, b);
    printf("O maior número entre %d e %d é %d", a, b, c);
    return 0;
}