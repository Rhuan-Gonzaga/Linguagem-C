#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero){
		printf("O numero %d � diferente de 0",numero);
	}
	else{
		printf("O numero %d � igual a 0", numero);
	}
}
