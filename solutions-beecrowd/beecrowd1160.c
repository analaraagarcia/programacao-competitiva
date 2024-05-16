#include <stdio.h>

int main(){
	
	int t, a, b, i, tempo=0;
	double g1, g2;
	
	scanf("%d", &t);
	
	for (i=0; i<t; i++){
		scanf("%d %d %lf %lf", &a, &b, &g1, &g2);
		
		
		while (a<=b && tempo<=100){
			a += (int)(a*g1/100.0);
			b += (int)(b*g2/100.0);
			tempo++;
		}
		
		if (tempo>100){
			printf("Mais de 1 seculo.\n");
		} else{
			printf("%d anos.\n", tempo);
		}
		tempo=0;	
	}
	
	return 0;
}