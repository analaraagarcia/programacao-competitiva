#include <stdio.h>

int main() {
	
	int N, X, i;
	
	scanf("%d", &N);
	
	for(i=1; i<=N; i++){
		scanf(" %d", &X);
		if (X%2==-1 && X<0){
			printf("ODD NEGATIVE\n");
						
		}else if (X%2==1 && X>0){
				printf("ODD POSITIVE\n");
				
		}else if (X%2==0 && X<0){
				printf("EVEN NEGATIVE\n");
				
		}else if (X%2==0 && X>0){
				printf("EVEN POSITIVE\n");
	
		}else {
				printf("NULL\n");
		}
	}
	
	
	return 0;
}