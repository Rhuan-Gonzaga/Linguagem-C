#include <stdio.h>		

main(){
	
	int n1,n2;
	
	printf("Digite um numero inteiro: ");
	scanf("%d",&n1);
	
	printf("Digite um outro numero inteiro: ");
	scanf("%d",&n2);
	
	printf("O resultado de %d == %d: %d \n", n1,n2,n1==n2);
	printf("O resultado de %d > %d: %d \n", n1,n2,n1>n2);
	printf("O resultado de %d >= %d: %d \n", n1,n2,n1>=n2);
	printf("O resultado de %d < %d: %d \n", n1,n2,n1<n2);
	printf("O resultado de %d <= %d: %d \n", n1,n2,n1<=n2);
	printf("O resultado de %d != %d: %d", n1,n2,n1!=n2);

	
}
