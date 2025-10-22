#include <stdio.h>

#define TAM 4

int main() {
	int idades[TAM], impares[TAM], pares[TAM], i=0, qtd=0, qtdPares = 0, qtdImpares = 0;
	char continuar;

	do {
		printf("Informe a %da idade:", i + 1);
		scanf("%i", &idades[i]);
		
		printf("Deseja continuar? (s/n): ");
		scanf(" %c", &continuar);
		i++;
	} while (continuar == 's' && i < 3);	
	
	qtd = i;
	for (i = 0; i < qtd; i++) {
		if (idades[i] % 2 == 0) {
			pares[qtdPares] = idades[i];
			qtdPares++;
		} else {
			impares[qtdImpares] = idades[i];
			qtdImpares++;
		}
	}
	
	for (i = 0; i < qtdPares; i++) {
		printf("Pares: %d\n", pares[i]);
	}
	
	for (i = 0; i < qtdImpares; i++) {
		printf("Impares: %d\n", impares[i]);
	}

	return 0;
}