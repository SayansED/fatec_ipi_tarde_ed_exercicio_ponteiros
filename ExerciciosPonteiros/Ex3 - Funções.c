#include<stdio.h>


void maior(float *pNum1, float *pNum2){
	if(*pNum1 > *pNum2){
		printf("Maior: %.2f", *pNum1);
	}
	else if (*pNum1 == *pNum2){
		printf("Iguais");
	}
	else {
		printf("Maior: %.2f", *pNum2);
	}
}

int main(){
	float num1=0, num2=0;
	float *pNum1, *pNum2;
	
	pNum1 = &num1;
	pNum2 = &num2;
	
	printf("Digite dois numeros: ");  scanf("%f", &num1);
	scanf("%f", &num2);
	
	maior(pNum1, pNum2);
	
	return 0;
}
