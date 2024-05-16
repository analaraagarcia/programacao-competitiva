#include <stdio.h>

int main() {
	
	int x, y, i, aux, soma=0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (y<x){
		aux = x;
		x = y+1;
		y = aux;
	}
	
	for (i=x; i<y; i++){
		if (i%2!=0){
			if (i<0){
				soma -= i*(-1);
			}else
				soma += i;
		}
	}
	printf("%d\n", soma);
	
	return 0;
}