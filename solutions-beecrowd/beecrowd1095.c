#include <stdio.h>

int main() {
	
	int I=-2, J=65;
	
	for(J=60; J>=0; J-=5){
		I+=3;
		printf("I=%d J=%d\n", I, J);
	}
	
	return 0;
}