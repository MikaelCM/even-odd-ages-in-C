# Separador de Idades Pares e Ímpares — Linguagem C

Este programa em C lê um conjunto de idades informadas pelo usuário, armazena-as em um vetor principal e, em seguida, separa automaticamente as idades **pares** e **ímpares** em vetores distintos.  
O objetivo é praticar o uso de **vetores**, **condicionais** e **laços de repetição** em **C**.

---

## Descrição do Problema

 - Elabore um programa que receba até 10 idades.  
 - Crie outros dois vetores (pares e ímpares).  
 - Após a leitura das idades e registro em `idades[]`, leia o vetor, identifique as idades pares e armazene-as no seu respectivo vetor.  
 - Faça o mesmo para as ímpares.

---

## Estrutura do Programa

- **Entrada:** idades fornecidas pelo usuário (até o limite do vetor).
- **Processamento:** separação das idades entre pares e ímpares.
- **Saída:** exibição das idades pares e ímpares.

---

## Código-Fonte

```c
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
