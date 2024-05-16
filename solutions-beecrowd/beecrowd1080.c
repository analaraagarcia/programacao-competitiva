#include <stdio.h>

int main() {
	
	int N, i, maior=-1, posicao;
	
	for (i=1; i<=100; i++){
		scanf("%d", &N);
		if (N>maior){
			maior = N;
			N = posicao;
			posicao = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", posicao);
	
	
	
	
	return 0;
}