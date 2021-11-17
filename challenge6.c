#include<stdio.h>
 void echange(float a,float b){
 	float temp;
 	temp=a;
 	a=b;
 	b=temp;
 	printf("la valeur finale de A = %.2f\n", a);
 	printf("la valeur finale de B = %.2f\n", b);
 }
 int main(){
 	float A,B;
 	
 	printf("entre la valeur de A :\n");
 	scanf("%f",&A);
 	
 	printf("entre la valeur de B :\n");
 	scanf("%f",&B);
 	
 	printf("la valeur inisial de A = %.2f\n",A);
 	printf("la valeur inisial de B = %.2f\n",B);
 	echange(A,B);

 	return 0;
 	
 }
