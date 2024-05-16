#include <stdio.h>

int main() {
	
	int M, N, i, aux, soma;
	
	while (1){
		scanf("%d %d", &M, &N);
		if (M<=0 || N<=0){
			break;
		}
		if (M>N){
			aux = M;
			M = N;
			N = aux;
		}	
		soma = 0;
		for (i=M; i<=N; i++){
			printf("%d ", i);
			soma+=i;
		}
		printf("Sum=%d\n", soma);
		
	}
	
	
	
	return 0;
}