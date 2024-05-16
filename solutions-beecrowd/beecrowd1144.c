#include <stdio.h>

int main() {
	
	int N, i, a, b, c, d;
	
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		a=i*i;
		b=i*i*i;
		printf("%d %d %d\n", i, a, b);
		
		c = a+1;
		d = b+1;
		printf("%d %d %d\n", i, c, d);
	}
	
	return 0;
}