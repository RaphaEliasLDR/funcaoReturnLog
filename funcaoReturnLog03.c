#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int valorCentimetro (int valor){
	int resultado;
	resultado = valor * 100;
	
	return resultado;
}


int main (){
	setlocale (LC_ALL, "portuguese");
	int valor;
	
	
	printf ("\nInforme um valor em metros: ");
	scanf ("%d", &valor);
	
	
	printf ("\n\nO valor informado em centimetros: %d cm", valorCentimetro (valor));
	return 0;
}
