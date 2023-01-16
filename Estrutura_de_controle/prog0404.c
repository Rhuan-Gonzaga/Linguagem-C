#include <stdio.h>
#include <locale.h>

main(){
	
	/*TABUADA DE 5*/
	setlocale(LC_ALL, "Portuguese");

	int n1,n2= 1;

	printf("Digite um valor p calcular a tabuada: ");
	scanf("%d", &n1);
	
	
	while (n2 <= 10){
		
		printf("%d * %d  = %d \n", n1,n2,n1*n2);
		n2 += 1;
	}

}
