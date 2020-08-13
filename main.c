#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que solicita um numero ao utilizador e apresenta o fatorial desse numero, utilizando uma sub-rotina.
   Autor:  Luís Filipe */

// declaração de subrotinas
int Fatorial(int numero);

int main(int argc, char *argv[]) {
		
	//Variaveis	
	int numero;
	
	//Solicitar o numero
	printf("Introduza o numero: ");
	scanf("%d", &numero);
	
	//Chamar Funçao
	printf("O fatorial de %d e: %d", numero, Fatorial(numero));
	
	//pausa
	getchar();
	
}


/*
	Esta função calcula o fatorial do numero
*/
int Fatorial(int numero)
{
	//Declaração variaveis (locais)
	int fatorial;
	
	//Inicializar variaveis
	fatorial = 1;
	
	//Calcular fatorial do numero
	while (numero > 1)
	{
		fatorial = fatorial * numero;   
	    numero = numero - 1;                    
    }
	
	//Retornar valor do fatorial	
	return fatorial;
	
	
}
