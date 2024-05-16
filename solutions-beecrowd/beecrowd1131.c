#include <stdio.h>

int main() {
	
	int i, g=0, novo=1, a=0, b=0, e=0, grenal=0; 
	/* sendo a = inter venceu, b = gremio venceu, e = empates. */
	while (novo==1){
		scanf("%d %d", &i, &g);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novo);
		grenal++;
		if (i>g){
			a++;
		}else if (i<g){
			b++;
		}else {
			e++;
		}
	}
	
	while (novo!=1 && novo!=2){
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novo);
	}

	printf("%d grenais\n", grenal);
	printf("Inter: %d\n", a);
	printf("Gremio: %d\n", b);
	printf("Empates: %d\n", e);
	
	if (a>b){
		printf("Inter venceu mais\n");
	}else if (b>a){
		printf("Gremio venceu mais\n");
	}
	
	return 0;
}