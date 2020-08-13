#include <stdio.h>
#include <stdlib.h>

/* Fun��o: aplica��o que solicita um numero ao utilizador e apresenta o fatorial desse numero, utilizando uma sub-rotina.
   Autor:  Lu�s Filipe */

// declara��o de subrotinas
int Fatorial(int numero);

int main(int argc, char *argv[]) {
		
	//Variaveis	
	int numero;
	
	//Solicitar o numero
	printf("Introduza o numero: ");
	scanf("%d", &numero);
	
	//Chamar Fun�ao
	printf("O fatorial de %d e: %d", numero, Fatorial(numero));
	
	//pausa
	getchar();
	
}


/*
	Esta fun��o calcula o fatorial do numero
*/
int Fatorial(int numero)
{
	//Declara��o variaveis (locais)
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
