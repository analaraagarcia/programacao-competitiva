#include <stdio.h>

void le_entrada(int *T, int vet[5]){
    scanf("%d", T);
    for (int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }
}

int resposta_correta(int T, int vet[]){
    int cont = 0;
    for (int i = 0; i < 5; i++){
        if (vet[i] == T){
            cont++;
        }
    }
    return cont;
}

int main(){
    int T, vet[5];
    le_entrada(&T, vet);
    printf("%d\n", resposta_correta(T, vet));

    return 0;
}