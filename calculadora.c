
#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2;
    char c;

    printf("Fale qual operacao fazer: (+, -, *, %)\n");
    scanf("%c", &c);

    printf("Fale os dois numeros para calcular \n");
    scanf("%f %f", &n1, &n2);


    switch( c ){

        case '+': printf("A soma de %.2f + %.2f = %.2f", n1, n2, (n1 + n2)); break;
        case '-': printf("A subtracao de %.2f + %.2f = %.2f", n1, n2, (n1 - n2)); break;
        case '*': printf("A multiplicacao de %.2f + %.2f = %.2f", n1, n2, (n1 * n2)); break;
        case '%': printf("A divisao de %.2f + %.2f = %.2f", n1, n2, (n1 / n2)); break;
        default: printf("Thadeu Default");

    }

}
