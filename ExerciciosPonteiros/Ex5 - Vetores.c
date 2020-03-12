/*

Escreva um programa em C que calcula a média de elementos 
armazenados em um vetor de 30 posições 

*/

int main() {
	
	int v[30] = {15, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	
	double total = 0;
    int i = 0, qtd = 0;
    int *pI, *pQtd, *pV;
	double *pTotal;
    
	pI = &i;
    pQtd = &qtd;
    pV = v;
    pTotal = &total;
    

    for (*pI = 0; *pI < 30; *pI+=1) {
    	*pTotal = pV[*pI] + *pTotal;
    	*pQtd+=1;
    }
    
    printf("\nQuantidade: %d", *pQtd);
    printf("\nTotal: %.2f", total);    
    printf("\nMedia: %.2f", (*pTotal / *pQtd));

    return 0;
}
