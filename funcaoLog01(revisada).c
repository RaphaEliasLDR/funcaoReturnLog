#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
	printf ("==========================================\n");
	printf ("\t\t SENAI-BA");
	printf ("\n==========================================");
}


int quantidadePares(int numero[]){
	
int i;
int pares = 0;

	for (i = 0; i < 6; i++){
	if (numero[i] % 2 == 0){
		pares++;
	}
	}
	printf ("\nQunatidade de números pares: %d", pares);
	
	return pares;
}


int quantidadeImpares(int numero[]){
	
int i;
int impares = 0;
	
	for (i = 0; i < 6; i++){
		if (numero[i] % 2 != 0){
		impares++;
	}
	}
	printf ("\nQuantidade de números impares: %d", impares);
	
	return impares;
}


void limparTela(){
	system ("cls");
}


int main (){
	setlocale (LC_ALL, "portuguese");
	
int i;	
int numero[6];
	
	
	cabecalho();
	for (i = 0; i < 6; i++){
		printf ("\nInforme o %dº número: ", i+1);
		scanf ("%d", &numero[i]);
	}
	
	
	
	limparTela ();
	cabecalho ();
	quantidadePares(numero);
	quantidadeImpares(numero);
	
	return 0;
}
