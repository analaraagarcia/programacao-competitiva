#include <stdio.h>

int main() {
	
	float a, media=0;
	int i, aux=0;
	
	for (i=1; i<=6; i++){
		scanf("%f", &a);
		if (a>0){
			aux++;
			media += a;
		}
	}
	printf("%d valores positivos\n", aux);
	printf("%.1f\n", media/aux);
	
	return 0;
}