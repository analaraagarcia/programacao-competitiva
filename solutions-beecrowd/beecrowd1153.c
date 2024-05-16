#include <stdio.h>

int main(){
	
	double N, i, fat=1, aux;
	
	scanf("%lf", &N);
	
	for (i=N; i>=1; i--){
		aux=i;
		fat*=aux;
		aux--;
	}
	printf("%.0lf\n", fat);
	
	
	return 0;
}