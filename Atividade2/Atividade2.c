#include <stdio.h>
main() {

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite o numero para o calculo da seri Fibonacci: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n");
    printf("%d\n", a);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}