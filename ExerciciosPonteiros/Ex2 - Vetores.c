/*
2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
valores digitados pelo usuário.
*/

#include<stdio.h>

int main() {
	
	int i = 0, maior = 0;
	int v[10] = {15, 8, 7, 6, 55, 4, 3, 2, 1, 0};
	int *pI;
	int *pMaior;
	int *pV;
	
	pI = &i;
	pV = v;
	pMaior = &maior;
	
	// Teste
	/*
	*pMaior = *pV;
	printf("v[0]=%d, *pV=%d, *Maior=%d", v[0], *pV, *pMaior);
	*/
	
	*pMaior = pV[0];
    for (*pI = 0; *pI < 10; *pI+=1) {
        if (pV[*pI] >= *pMaior) 
			*pMaior = pV[*pI];
    }
    printf("Maior: %d\n", *pMaior);
	
	return 0;
}
