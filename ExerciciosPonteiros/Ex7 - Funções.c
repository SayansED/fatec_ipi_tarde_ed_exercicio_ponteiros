// Exercicio 7

#include<stdio.h>

float fat(int n){
	if(n==0 || n==1)
		return 1;
	return n * fat(n-1);
}

int main(){
	// Fatorial de 5
	 int i=10;
	 int *pI;
	 pI = &i;
	 
	 for(*pI=0; *pI<=10; *pI+=1)
	 	printf("Fatorial de %d = %.0f\n", *pI, fat(i));
	 
	 return 0;
}

// Possivel solução
/*
// Exercicio 7
#include<stdio.h>
float fat(int *n){
	if(*n==0 || *n==1)
		return 1;
	return *n * fat(&n-1);
}
int main(){
	// Fatorial de 5
	 int i=10;
	 int *pI;
	 pI = &i;
	 for(*pI=0; *pI<=10; *pI+=1)
	 	printf("Fatorial de %d = %.0f\n", *pI, fat(&i));
	 return 0;
}
*/
