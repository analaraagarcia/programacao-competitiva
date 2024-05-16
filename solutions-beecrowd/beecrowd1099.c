#include <stdio.h>

int main() {
	
	int N, X, Y, i, soma, aux;
	scanf("%d", &N);
	
	while (N){
		scanf("%d %d", &X, &Y);
		if (X>Y){
			aux=X;
			X=Y;
			Y=aux;
		}
		soma=0;
		for (i=X+1; i<Y; i++){
			if (i%2!=0){
				soma+=i;
			}
		
		}
		printf("%d\n", soma);
		N--;
	}
	
	
	return 0;
}