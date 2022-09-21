#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 1;
	while (i<=10){
		printf("Value : %d\n", i);
		i++;
		if (i > 5) {
			break;
		}
	} 
	
	return 0;
}
