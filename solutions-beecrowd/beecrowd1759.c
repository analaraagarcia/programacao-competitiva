#include <stdio.h>

void santa_claus(int N){
    if (N == 1){
        printf("Ho!\n");
        return;
    }
    printf("Ho ");
    santa_claus(N - 1);
}

void le_entrada(int *N){
    scanf("%d", N);
}

int main(){
    int N;
    le_entrada(&N);
    santa_claus(N);

    return 0;
}