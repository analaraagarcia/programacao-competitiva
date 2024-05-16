#include <stdio.h>

int main(){
	
	int N[10], i, x, aux;
	
	scanf("%d", &x);
	
	N[0]=x;
	
	for (i=0; i<10; i++){
		aux=N[i];
		N[i+1]= 2*N[i];
		printf("N[%d] = %d\n", i, aux);
	}
	
	return 0;
}