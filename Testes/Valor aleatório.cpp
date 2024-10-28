#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i=0, vetor[10];
	
	srand(time(NULL));
	
	for(i=0; i<10; i++){
		vetor[i]= rand() % 11;
		printf("%d ", vetor[i]);
		//printf("%d ", rand() % 11);
	}
	
	return 0;
}
