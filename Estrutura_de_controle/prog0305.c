#include <stdio.h>
#include <locale.h>

/*Escreva um programa que leia dois números e os apresente por ordem crescente.*/

main (){
	
	setlocale(LC_ALL, "Portuguese");
	int n1,n2,temp;
	
	printf("\nDigite dois numeros: ");
	scanf("%d %d", &n1, &n2);
	
	//96 55 
	if (n1 > n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	printf("%d %d\n",n1,n2);
	
}
