#include <stdio.h>
 
int main() {
 
    int a, b, c, maior1, maior2;
    scanf("%d %d %d", &a, &b, &c);
    maior1 = (a + b + abs(a-b))/2;
    maior2 = (c + maior1 + abs(c-maior1))/2;
    printf("%d eh o maior\n", maior2);
 
    return 0;
}