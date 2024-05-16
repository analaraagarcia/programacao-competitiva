#include <stdio.h>
 
int main() {
 
    int horas, veloc;
    double litros;
    scanf("%d %d", &horas, &veloc);
    litros = (horas*veloc)/12.0;
    printf("%.3lf\n", litros);
 
    return 0;
}