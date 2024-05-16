#include <stdio.h>

int main() {
	
	float x=-1, y=-1, media;
	
	while (x<0 || x>10){
		scanf("%f", &x);
		if (x<0 || x>10){
			printf("nota invalida\n");	
		}
	}
	
	while (y<0 || y>10){
		scanf("%f", &y);
		if (y<0 || y>10){
			printf("nota invalida\n");	
		}
	}
		
	media = (x+y)/2;
	printf("media = %.2f", media);
	
	return 0;
}