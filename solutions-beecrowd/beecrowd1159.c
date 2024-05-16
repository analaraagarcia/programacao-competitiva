#include <stdio.h>

int main(){
	
	int x=1, i, par, soma=0;
	
	while (x!=0){
		scanf("%d", &x);
		if (x==0){
			break;
		}
		if (x%2==1 || x%2==-1){
			x++;
		}
		soma=x;
		for (i=1; i<5; i++){
			x+=2;
			soma+=x;		
		}
		printf("%d\n", soma);
		soma=0;
		
	}
	
	
	return 0;
}