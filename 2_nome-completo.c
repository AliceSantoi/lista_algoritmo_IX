#include <stdio.h>
#include <locale.h>

/*2. Crie um programa que solicita e armazena o nome completo de um usu�rio em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o �\0� na contagem e n�o utilize a fun��o strlen.*/

int main(){
	
	char nome[40];
	int i;
	
	printf("Digite seu nome completo: ");
	gets(nome);

	for(i = 0; nome[i];i++){
		
	}
	printf("A string \"%s\" possui %d caracteres",nome, i);
	
	
	
	
	
	
	return(0);
}
