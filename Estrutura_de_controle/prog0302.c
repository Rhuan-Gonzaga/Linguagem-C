#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n1;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	if (n1 >= 0){
		printf("O numero %d é positivo", n1);
	}
	else{
		printf("O numero %d é negativo", n1);
	}
}
