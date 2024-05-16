#include <stdio.h>

int main(){
	
	int x, y, i, cont=0;
	
	scanf("%d %d", &x, &y);
	
	for (i=1; i<=y; i++){
		cont++;
		if (cont==x){
			printf("%d\n", i);
			cont=0;
		}else {
			printf("%d ", i);	
		}
		
	}
	
	return 0;
}