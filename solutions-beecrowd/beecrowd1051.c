#include <stdio.h>

int main() {
	
	double a, b;
	
	scanf("%lf", &a);
	
	if (a<=2000.00) {
		printf("Isento\n");
	}else if (a>2000.00 && a<=3000.00) {
		b = (a-2000)*0.08;
		printf("R$ %.2lf\n", b);
	}else if (a>3000.00 && a<=4500.00) {
		b = 1000.00*0.08 + (a-3000)*0.18; 
		printf("R$ %.2lf\n", b);
	}else {
		b = 1000.00*0.08 + 1500*0.18 + (a-4500)*0.28;
		printf("R$ %.2lf\n", b);
	}
	
	return 0;
}