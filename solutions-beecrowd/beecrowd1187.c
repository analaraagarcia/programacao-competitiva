#include <stdio.h>

int main(){
    int i, j;
    char O;
    double M[12][12];
    double soma=0;

    scanf("%c", &O);

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++){
        for (j = i + 1; j < 11 - i; j++){
            soma += M[i][j];
        }
    }

    if (O == 'S'){
        printf("%.1lf\n", soma);
    }else if (O == 'M'){
        printf("%.1lf\n", soma/30.0);
    }

    return 0;
}