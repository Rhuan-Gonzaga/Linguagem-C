#include <stdio.h>

/*Conversor dolar p real*/

void conversor(float dolar, float cota){
	
	float valor = (dolar*cota);
	
	printf("O valor de USD%.2f com a cotacao de %.2f fica no total de R$%.2f",dolar,cota,valor);
	
}


main(){
	
	float dolar, cota;
	
	printf("Digite o valor a ser calculado:USD ");
	scanf("%f", &dolar);	
	
	printf("Digite a cotacao atual do dolar: ");
	scanf("%f", &cota);
	
	conversor(dolar, cota);
}
