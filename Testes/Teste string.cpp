#include <stdio.h>
#include <string.h>

int main(){
	char raca[20];
	char lefou[20] = "lefou";
	char escolhida[30];
	
		printf("\nDigite a raca do personagem 1: ");
		scanf("%s", &raca);
		
		if( strcmp (raca,"Barbaro")==0){
			printf("A raca escolhida foi Barbaro\n");
			strcpy(escolhida, "Furia"); 
		}
		else if( strcmp (raca,"Espadachim")==0){
			printf("A raca escolhida foi Espadachim\n");
		}
		
		else if( strcmp (raca,"Lefou")==0){
			printf("A raca escolhida foi Lefou\n");
		}
		else{
			printf("Essa raca nao existe\n");
		}
	
	return 0;
}
