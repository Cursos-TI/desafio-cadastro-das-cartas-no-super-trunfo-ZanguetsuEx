#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido inplicitamente para float

    printf("Resultado: %2.f\n", resultado);

    return 0;

}