#include <stdio.h>

int main(){
	
	int N, x, i, aux=0;
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		scanf("%d", &x);
		if (x>=10 && x<=20){
			aux++;
		}
	}
	printf("%d in\n", aux);
	printf("%d out\n", N-aux);
	
	return 0;
}