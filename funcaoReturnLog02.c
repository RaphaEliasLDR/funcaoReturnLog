#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int adicaoDosNumeros (int primeiroNumero, int segundoNumero){
	int resultadoDaSoma;
	resultadoDaSoma = primeiroNumero + segundoNumero;
	
	return resultadoDaSoma; 
}

int subtracaoDosNumeros (int primeiroNumero, int segundoNumero){
	int resultadoDaSubtracao;
	resultadoDaSubtracao = primeiroNumero - segundoNumero;
	
	return resultadoDaSubtracao; 
}

int multiplicacaoDosNumeros (int primeiroNumero, int segundoNumero){
	int resultadoDaMultiplicacao;
	resultadoDaMultiplicacao = primeiroNumero * segundoNumero;
	
	return resultadoDaMultiplicacao; 
}

int divisaoDosNumeros (int primeiroNumero, int segundoNumero){
	float resultadoDaDivisao;
	resultadoDaDivisao = primeiroNumero / segundoNumero;
	
	return resultadoDaDivisao; 
}


int main (){
setlocale (LC_ALL, "portuguese");	

	int i, primeiroNumero, segundoNumero;
	int adicao, subtracao, multiplicacao;
	float divisao;
	
	
	printf ("\nInforme o primeiro número: ");
	scanf ("%d", &primeiroNumero);
	
	printf ("\nInforme o segundo número: ");
	scanf ("%d", &segundoNumero);
	
	
	adicao = adicaoDosNumeros (primeiroNumero, segundoNumero);
	subtracao = subtracaoDosNumeros (primeiroNumero, segundoNumero);
	multiplicacao = multiplicacaoDosNumeros (primeiroNumero, segundoNumero);
	divisao = divisaoDosNumeros (primeiroNumero, segundoNumero);
	
	
	printf ("\nResultado da adição: %d", adicao);
	printf ("\nResultado da subtração: %d", subtracao);
	printf ("\nResultado da multiplicação: %d", multiplicacao);
	printf ("\nResultado da divisão: %.2f", divisao);
	
return 0;	
}
