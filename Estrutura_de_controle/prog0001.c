#include <stdio.h>
#include <locale.h>

/*Escreva um programa que leia um inteiro e indique se esse inteiro é ou não igual a zero usando switch*/

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int valor;

	printf("Digite um valor inteiro: ");
	scanf("%d",&valor);
	
	
	switch(valor){
		case 0:
			printf("O valor %d é igual a 0",valor);
			break; 	
		default:
			printf("O valor %d é diferente de 0",valor);
			break;

	}
	

}
