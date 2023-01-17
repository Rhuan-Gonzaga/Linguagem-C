#include <stdio.h>
#include <locale.h>

/*Implemente um programa que adicione $1.000,00 ao salário de um indivíduo, caso este seja inferior a $100.000,00.*/

main (){
	
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Digite o valor de seu salário: ");
	scanf("%f", &salario);

	if (salario < 100000){
		salario += 1000;
		printf("Seu salario aumentou para %.2f", salario);
	}
}
