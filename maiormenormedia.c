#include <stdio.h>

int main(){

    int c, n ;
    float media,numero, maior, menor;
    menor =10000000000.0;
    maior = 0.0;
    scanf("%d", &n);

    for(c = 1; c <= n; c++){

        scanf("%f", &numero);

        if (numero >= maior) maior = numero;


        if (numero <= menor) menor = numero;

        media = media + numero;
    }

    media = media /n;

    printf("O maior e: %.2f \n", maior);
    printf("O menor e: %.2f \n", menor);
    printf("A media e: %.2f \n", media);

}
