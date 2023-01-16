#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n = 5;
	
	while (n > 0 ){
		
		printf("%d \n", n);
		n -= 1;
	}

}
