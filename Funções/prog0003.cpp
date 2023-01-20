#include <stdio.h>


void calcularMedia(float n1,float n2){
	
	float media =  (n1+n2)/2;
	
	if (media >= 7){
		printf("Sua media e %.2f Voce passou!!",media);
	}
	else{
		printf("Sua media e %.2f Voce nao passou!!",media);
	}
	
}

main(){

	float n1,n2;
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	calcularMedia(n1,n2);
	
	
}


