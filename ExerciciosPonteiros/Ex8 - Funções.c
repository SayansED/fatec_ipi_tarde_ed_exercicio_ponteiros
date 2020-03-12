#include <stdio.h>

void ehPrimo(int x) {
	int div = 0, i = 0;
	int *pDiv, *pI;
	pDiv = &div;
	pI = &i;
	for (*pI = 1; *pI <= x; *pI+=1) {
    if (x % *pI == 0) { 
     *pDiv+=1;
    }
  }
    
  if (div == 2)
    printf("O numero %d eh primo!", x);
  else
    printf("O numero %d nao eh primo!", x);
}

int main() {
  int x;
  int *pX;
  pX = &x;
   
  do {
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &x);
  } while (*pX < 1);
  
  ehPrimo(x);

  return 0;
}
