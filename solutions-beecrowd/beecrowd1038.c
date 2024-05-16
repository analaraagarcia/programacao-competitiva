#include <stdio.h>

int main() {
	
	int a, b;
	double total;
	
	scanf("%d %d", &a, &b);
	
	if (a==1) {
		total = 4*b;
		printf("Total: R$ %.2lf\n", total);
	}else if (a==2) {
		total = 4.5*b;
		printf("Total: R$ %.2lf\n", total);
	}else if (a==3) {
		total = 5*b;
		printf("Total: R$ %.2lf\n", total);
	}else if (a==4) {
		total = 2*b;
		printf("Total: R$ %.2lf\n", total);
	}else {
		total = 1.5*b;
		printf("Total: R$ %.2lf\n", total);
	}
	
	return 0;
}