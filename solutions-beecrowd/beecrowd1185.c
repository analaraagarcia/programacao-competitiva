#include <stdio.h>

int main(){

    int i, j;
    char O;
    float M[12][12];
    float soma=0;

    scanf("%c", &O);

    for (i=0; i<12; i++){
        for (j=0; j<12; j++){

            scanf("%f", &M[i][j]);

        }
    }

    for (i=0; i<12; i++) {
        for (j=0; j<12; j++) {
            if (i + j < 11) {
                soma += M[i][j];
            }
        }
    }

    if (O=='S'){
        printf("%.1f\n", soma);
    }else if (O=='M'){
        printf("%.1f\n", soma/66.0);
    }


    return 0;
}