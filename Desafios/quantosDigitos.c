#include <stdio.h>

int main(){

    long int n;
    long int i;

    scanf("%d", &n);
    long int nGuardado = n;

    for(i=1; n > 0; i++){

        n = n/10;

    }

    printf("O numero %d tem %d digitos.",nGuardado , i-1);
}
