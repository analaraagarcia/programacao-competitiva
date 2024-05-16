#include <stdio.h>
#include <math.h>

int main() {
	
	int N, i, aux;
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		if (i%2==0){
			aux = pow(i,2);
			printf("%d^%d = %d\n", i, 2, aux);	
		}
	}
	
	return 0;
}