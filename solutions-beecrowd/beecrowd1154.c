#include <stdio.h>

int main() {
	
	double x=0, soma=0, media, aux;
	int contador=0;
	
	do {
		scanf("%lf", &x);
		aux=x;
		if (x>0){
			contador++;
			soma+=aux;
		}
		media = soma/contador;
		
	} while (x>0);
	
	printf("%.2lf\n", media);
	
	return 0;
}