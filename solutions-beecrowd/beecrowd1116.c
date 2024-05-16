#include <stdio.h>

int main() {
	
	int n, x, y; 
	float divisao;
	
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++){
		scanf("%d %d", &x, &y);
		if (y==0){
			printf("divisao impossivel\n");
		}else {
			divisao = (float)x/(float)y;
			printf("%.1f\n", divisao);
		}
	}
	
	return 0;
}