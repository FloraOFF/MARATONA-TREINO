#include <stdio.h>

int main (void){

	int primeiroAndar, segundoAndar, terceiroAndar;
	int i, menor;
	short vet[5];

	scanf("%d %d %d", &primeiroAndar, &segu1ndoAndar, &terceiroAndar);

	vet[0] = segundoAndar*2 + terceiroAndar*4;
	vet[1] = primeiroAndar*2 + terceiroAndar*2;
	vet[2] = primeiroAndar*4 + segundoAndar*2;

	menor = vet[0];

	for (i = 1; i < 3; i++)
	{
		if (vet[i] < menor)
			menor = vet[i];
	}


	printf("%hu\n", menor);
}
