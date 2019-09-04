#include <stdio.h>


int main(){
	
	int i, j;
	int m, n;

	printf("Quantidade de colunas!");
	scanf("%d", &m);

	printf("Quantidade de linhas!");
	scanf("%d", &n);

	int matriz[m][n];

	for(i=1; i<= m; i++){
		for(j=1; j<= n;j++){
		
		scanf("%d", &matriz[i][j]);

		}

	}

	for(i=1; i<= m; i++){
		for(j=1; j<= n;j++){
		
		printf("%d", matriz[i][j]);

		}
		
		printf("\n");

	}



}
