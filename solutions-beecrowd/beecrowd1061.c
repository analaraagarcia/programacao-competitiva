#include <stdio.h>

int main() {
	
	int d1, h1, m1, s1; 
	int d2, h2, m2, s2; 
	int totalD, totalH, totalM, totalS;
	
	scanf("Dia %d", &d1);
	scanf("%d : %d : %d\n", &h1, &m1, &s1);
	scanf("Dia %d", &d2);
	scanf("%d : %d : %d", &h2, &m2, &s2);
	
	totalD = d2 - d1;
	totalH = h2 - h1;
	totalM = m2 - m1;
	totalS = s2 - s1;
	
	if (totalS<0) {
		totalS += 60;
		totalM--;
	}
		
	if (totalM<0) {
		totalM += 60;
		totalH--;
	}
	
	if (totalH<0) {
		totalH += 24;
		totalD--;
	}
	
	printf("%d dia(s)\n", totalD);
	printf("%d hora(s)\n", totalH);
	printf("%d minuto(s)\n", totalM);
	printf("%d segundo(s)\n", totalS);
	
	
	return 0;
}