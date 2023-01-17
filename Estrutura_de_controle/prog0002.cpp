#include <stdio.h>
#include <locale.h>

/*Escreva um programa que verifique se um ano é bissexto ou não.*/

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if (ano % 4 == 0){
		if (ano % 100 != 0){
			printf("%d é um ano bissexto", ano);
		}
		
		else if (ano % 100 == 0){
			if (ano % 400 != 0){
				printf("%d não é um ano bissexto",ano);
			}
			else if (ano % 400 == 0){
					printf("%d é um ano bissexto", ano);
			}
		}
		
	}


	

}
