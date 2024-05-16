#include <stdio.h>

int main() {
	
	float a;
	int i, aux=0;
	
	for (i=1; i<=6; i++){
		scanf("%f", &a);
		if (a>0){
			aux++;
		}
	}
	printf("%d valores positivos\n", aux);
	
	return 0;
}