#include <stdio.h>

int main(){
	
	int x=1, z=0, a=1, i, cont=0;
	scanf("%d", &x);
	
	while (z<=x){
		scanf("%d", &z);
	}
	
	for (i=x; i<=z; i++){
		cont+=i;
		if (cont>z){
			break;
		}
		a++;
	}
	
	printf("%d\n", a);
	
	return 0;
}