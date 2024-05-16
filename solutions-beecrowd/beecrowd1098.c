#include <stdio.h>

int main() {
	
	float I=0, J=1;
	
	while (I<=2.2){
	
		if((I>0 && I<1)|| (I>1 && I<2) || (I>2.1 && I<=2.2)){
			printf("I=%.1f J=%.1f\n", I, J+I);
			printf("I=%.1f J=%.1f\n", I, J+1+I);
			printf("I=%.1f J=%.1f\n", I, J+2+I);
				
		}else{
			printf("I=%d J=%d\n", (int)I, (int)J+(int)I);
			printf("I=%d J=%d\n", (int)I, (int)J+1+(int)I);
			printf("I=%d J=%d\n", (int)I, (int)J+2+(int)I);
		}
			
		I+=0.2;
	}
	
	
	return 0;
}