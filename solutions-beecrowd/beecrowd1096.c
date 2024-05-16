#include <stdio.h>

int main() {
	
	int I=-1, J=7;
	
	while (I<9){
		
		for(J=7; J>=5; J--){
			if (J==7){
				I+=2;
			}else {
				I==I;
			}
			printf("I=%d J=%d\n", I, J);
		}
	}
	
	
	return 0;
}