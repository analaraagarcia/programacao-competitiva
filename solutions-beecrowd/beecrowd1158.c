#include <stdio.h>

int main(){
	
	int N, x, y, i, j=0, soma=0;
	
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		scanf("%d %d", &x, &y);
		if (x%2==0){
			x++;
			soma=0;
			for (j=1; j<=y; j++){
				soma+=x;
				x+=2;
			}
			printf("%d\n", soma);
	
		}else {
			soma=0;
			for (j=1; j<=y; j++){
				soma+=x;
				x+=2;
			}
			printf("%d\n", soma);
		} 	
		
	}
	
	return 0;
}