#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que armazene um vetor de inteiros de 20 posições, identifique  o percentual de números impares e de números pares informados */

int main(int argc, char *argv[]) {
	
	int vetor[20];
	int x; 
	float impar, par, porcPar, porcImpar, resto;

	par = 0;
	impar = 0;
	
	for(x=0;x<20;x++){
		
		printf("Digite um valor: \n ");
		scanf("%d", &vetor[x]);
		
		resto = x %2;
		
		if(resto == 1){
			printf("Esse numero e par! \n");	
			par++;
			printf("Numeros pares: %f \n", par);
	
		} else{
			printf("Esse numero e impar! \n");
			impar++;
			printf("Numeros impares: %f \n", impar);
		
		}
	}
	
	porcPar = (par/20)*100;
	porcImpar = (impar/20)*100;
	
	printf("Numero Final de Pares: %f \n", par);
	printf("Porcentagem Final de Pares: %f \n", porcPar);
	printf("Numero Final de Impares: %f \n", impar);
	printf("Porcentagem Final de Impares: %f \n", porcImpar);
	
	return 0;
}
