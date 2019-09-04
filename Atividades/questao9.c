#include <stdio.h>

int main(){

    int n;
    unsigned long int fat = 1;

    scanf("%d", &n);
    printf("\n");

    int i = n;

    for(i; i > 1; i--){

        printf("%d\n", i);
        printf("*\n");

        fat = fat * i;

    }

        printf("1\n");
        printf("\nFatorial de %d e igual a: %d", n, fat );

}
