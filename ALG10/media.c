#include <stdio.h>
#include <stdlib.h>

/* fa�a um algoritmo que implemente um vetor de 20 posi��es, 
leia as 20 posi��es e identifique em um novo la�o, 
qual o maior e menor numero informado e qual a media dos n�meros informados. */

int main(int argc, char *argv[]) {
	
	int vetor[5];
	int x=0;	
	int valor;
	int media=0;
	int maior=0;
	int menor=10000000;
	
	
	while(x<5){
		printf("Digite um valor: ");
		scanf("%d", &vetor[x]);
		
		if(vetor[x] < menor){
			menor = vetor[x];	
		}else{
			if(vetor[x] > maior){
			maior = vetor[x];	
			}
		}	
		media = media + vetor[x];
		x++;
	}			
	
	media = media / x;
	printf("O maior=%d, menor=%d, media=%d", maior, menor, media);
	
	return 0;
}
