#include <stdio.h>

int main(){
	
	int N, i;
	
	do {
		scanf("%d", &N);
		for (i=1; i<=N; i++){
			if (i<N){
				printf("%d ", i);
			}else {
				printf("%d\n", i);
			}	
		}
		
	} while (N!=0);
	
	return 0;
}