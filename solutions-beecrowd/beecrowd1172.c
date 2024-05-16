#include <stdio.h>

int main(){
	
	int x[10], i, aux;
	
	for (i=0; i<10; i++){
		scanf("%d", &x[i]);
		aux=x[i];
		if (x[i]<=0){
			printf("X[%d] = 1\n", i);
		} else {
			printf("X[%d] = %d\n", i, aux);
		}
	}
	
	
	return 0;
}