#include <stdio.h>
 
int main() {
 
    int cod1, num1, cod2, num2;
    double valor1, valor2, total;
    scanf("%d %d %lf", &cod1, &num1, &valor1);
    scanf("%d %d %lf", &cod2, &num2, &valor2);
    total = num1*valor1 + num2*valor2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}