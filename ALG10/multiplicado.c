#include <stdio.h>
#include <stdlib.h>

/* Crie dois vetores do tipo inteiro com a capacidade de 10 posições, 
leia números que serão armazenados sequencialmente no primeiro vetor, 
faça um novo laço que armazene no segundo vetor o valor do primeiro multiplicado 
por 2 quando o índice for par, e multiplique por 3 quando o índice for impar. */

int main(int argc, char *argv[]) {
	
	int vetor1[10];
	int vetor2[10];
	int x;
	int y;
	
	for(x=0;x<10;x++){
		printf("Digite um valor: ");
		scanf("%d", &vetor1[x]);
	}
	
	while(y<=10){
		
		if(vetor1[x] % 2 == 0){
			vetor2[y] = vetor1[x] * 2;
			printf("O resultado do numero par multiplicado por 2: %d \n", vetor2[y]);
		}else{
			vetor2[y] = vetor1[x] * 3;
			printf("O resultado do numero impar multiplicado por 3: %d \n", vetor2[y]);
		}
		
		y++;
	}
	
	
	
	return 0;
}
