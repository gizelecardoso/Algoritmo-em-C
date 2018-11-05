#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que armazene um vetor de inteiros de 20 posições, 
identifique  o percentual de números impares e de números pares informados */

int main(int argc, char *argv[]) {
	
	int vetor[20];
	int impar, par, x; 
	float porcPar, porcImpar;
	
	for(x=0;x<20;x++){
		
		printf("Digite um valor: \n ");
		scanf("%f", &vetor[x]);
		
		par = 0;
		impar = 0;
		
		if(x %2 ==0){
			
		} else{
			printf("Numero impar! \n");
			printf("Quantidade de numeros impares: %d \n", impar);
			impar++;
			porcImpar = (impar/20)*100;
			prinf("Porcentagem de numeros impares: %d \n", porcImpar);
			
		}
	}
	
	printf("Porcentagem Final de Pares: %d \n", porcPar);
	printf("Porcentagem Final de Impares: %d \n", porcImpar);
	
	
	return 0;
}
