#include <stdio.h>
#include <locale.h>

/*Escreva um programa que verifique se um ano � bissexto ou n�o.*/

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	if (ano % 4 == 0){
		if (ano % 100 != 0){
			printf("%d � um ano bissexto", ano);
		}
		
		else if (ano % 100 == 0){
			if (ano % 400 != 0){
				printf("%d n�o � um ano bissexto",ano);
			}
			else if (ano % 400 == 0){
					printf("%d � um ano bissexto", ano);
			}
		}
		
	}


	

}
