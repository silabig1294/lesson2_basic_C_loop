#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0;
	long sum = 0;

	for(i=1;i<=5;i++){
		sum += i;
	}  

	printf("Total : %d", sum); 
	
	return 0;
}
