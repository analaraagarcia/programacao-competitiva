#include <stdio.h>
#include <math.h>

int main() {
	
	double A, B, C, delta, R1, R2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta = pow(B,2) - 4*A*C;
	
	if (A!=0) {
		if (delta>=0){
			R1 = (B*(-1) + sqrt(delta)) / (2*A);
			R2 = (B*(-1) - sqrt(delta)) / (2*A);
			printf("R1 = %.5lf\n", R1);
			printf("R2 = %.5lf\n", R2);
		} else {
			printf("Impossivel calcular\n");
		}
	} else {
		printf("Impossivel calcular\n");
	}
	
	return 0;
}