#include <stdio.h>

int main() {
	
	int a, i, aux=0;
	
	for (i=1; i<=5; i++){
		scanf("%d", &a);
		if (a%2==0){
			aux++;
		}
	}
	printf("%d valores pares\n", aux);
	return 0;
}