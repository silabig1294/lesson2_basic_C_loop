#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 1;
	int j = 10;

	do{
		printf("Volue : %d\n", i);
		i = i + 1;
	}while(i<=j);
	
	return 0;
}
