#include <stdio.h>

int main(){
	
	float CalcularAreaRetang(float x, float y);
	float area = CalcularAreaRetang(10, 20);
	printf("Area: %.2f", area);
	
	return 0;
}

float CalcularAreaRetang(float base, float altura){
	
	float area = base * altura;  
	
	return area;
}
