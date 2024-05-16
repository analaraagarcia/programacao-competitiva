#include <stdio.h>

int main() {
	
	double a, b;
	
	scanf("%lf", &a);
	
	if (a>=0 && a<=400.00) {
		b = a*1.15;
		printf("Novo salario: %.2lf\n", b);
		printf("Reajuste ganho: %.2lf\n", 0.15*a);
		printf("Em percentual: 15%%\n");
	}else if (a>400.00 && a<=800.00) {
		b = a*1.12;
		printf("Novo salario: %.2lf\n", b);
		printf("Reajuste ganho: %.2lf\n", 0.12*a);
		printf("Em percentual: 12%%\n");
	}else if (a>800.00 && a<=1200.00) {
		b = a*1.10;
		printf("Novo salario: %.2lf\n", b);
		printf("Reajuste ganho: %.2lf\n", 0.10*a);
		printf("Em percentual: 10%%\n");
	}else if(a>1200 && a<=2000.00) {
		b = a*1.07;
		printf("Novo salario: %.2lf\n", b);
		printf("Reajuste ganho: %.2lf\n", 0.07*a);
		printf("Em percentual: 7%%\n");
	}else {
		b = a*1.04;
		printf("Novo salario: %.2lf\n", b);
		printf("Reajuste ganho: %.2lf\n", 0.04*a);
		printf("Em percentual: 4%%\n");
	}
	
	return 0;
}