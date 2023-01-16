#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int n = 0;
	
	while (n < 10 ){
		
		printf("%d \n", n+1);
		n += 1;
	}

}
