#include <stdio.h>
#include <locale.h>

/*3. Fa�a um programa que solicita e armazena cinco n�meros inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int num[5],i,cont = 0;
	
	for(i = 0; i < 5; i++){
		printf("Insira o %d� n�mero: ",i + 1);
		scanf("%d",&num[i]);
	}
	
	for(i = 0;i < 5; i++){
		cont = cont + num[i];
	}
	
	printf("Resultado da soma: %d",cont);
	
	return(0);
}
