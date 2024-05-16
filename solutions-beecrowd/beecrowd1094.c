#include <stdio.h>

int main() {
	
	int N, quantia, i;
	float total, c=0, r=0, s=0;
	char tipo;
	
	scanf("%d", &N);
	
	for (i=1; i<=N; i++){
		scanf("%d %c", &quantia, &tipo);
		
		if (tipo=='C'){
			c+=quantia;
		}else if (tipo=='R'){
			r+=quantia;
		}else if (tipo=='S'){
			s+=quantia;
		}
		
		total = c+r+s;
	}
	
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %.0f\n", c);
	printf("Total de ratos: %.0f\n", r);
	printf("Total de sapos: %.0f\n", s);
	printf("Percentual de coelhos: %.2f %%\n", (c/total)*100);
	printf("Percentual de ratos: %.2f %%\n", (r/total)*100);
	printf("Percentual de sapos: %.2f %%\n", (s/total)*100);
	
	return 0;
}