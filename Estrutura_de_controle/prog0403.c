#include <stdio.h>
#include <locale.h>

main(){
	
	/*TABUADA DE 5*/
	setlocale(LC_ALL, "Portuguese");

	int n1 = 5, n2=1;
	
	
	while (n2 < 11){
		
		printf("%d * %d  = %d \n", n1,n2,n1*n2);
		n2 += 1;
	}

}
