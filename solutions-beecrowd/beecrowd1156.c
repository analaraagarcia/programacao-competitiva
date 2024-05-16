#include <stdio.h>
#include <math.h>

int main(){
	
	double s=0, i, j=1, k;
	
	for (i=1; i<=39; i+=2){
		k = i/j;
		s+=k;
		j*=2;
	}
	printf("%.2lf\n", s);
	
	return 0;
}