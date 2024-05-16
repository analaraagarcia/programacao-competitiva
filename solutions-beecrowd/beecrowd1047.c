#include <stdio.h>

int main() {
	
	int hora1, min1, hora2, min2, total1, total2, duracao;
	
	scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2);
	
	if (hora1<hora2) {
		total1 = hora1*60 + min1;
		total2 = hora2*60 + min2;
		duracao = total2-total1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao/60, duracao%60);
	}else if (hora1>hora2) {
		total1 = hora1*60 + min1;
		total2 = hora2*60 + min2;
		duracao = 24*60 - total1 + total2;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao/60, duracao%60);
	}else if (hora1==hora2 && min1==min2) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else if (hora1==hora2 && min1>min2) {
		total1 = hora1*60 + min1;
		total2 = hora2*60 + min2;
		duracao = 24*60 - total1 + total2;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao/60, duracao%60);
	}else {
		duracao = min2 - min1;
		printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", duracao);
	}
			
	return 0;
}