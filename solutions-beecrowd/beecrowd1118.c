#include <stdio.h>

int main() {
	
	float x=-1, y=-1, media;
	int novo=1;
	
	while (novo==1){
		do {
			scanf("%f", &x);
			if (x<0 || x>10){
				printf("nota invalida\n");	
			}
			
		}while (x<0 || x>10);
		
		do {
			scanf("%f", &y);
			if (y<0 || y>10){
				printf("nota invalida\n");	
			}
			
		}while (y<0 || y>10);
		
		media = (x+y)/2;
		printf("media = %.2f\n", media);
	
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &novo);
		
		while (novo!=1 && novo!=2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &novo);
		}
	}
	
	
	return 0;
}