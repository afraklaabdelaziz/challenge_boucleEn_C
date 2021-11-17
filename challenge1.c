#include<stdio.h>
int main(){
	int A,M,i;
	printf("saisir un nombre :\n");
	scanf("%d",&A);
	printf("table de multiplication de %d est :\n",A);
	for(i=1;i<=10;i++){
		M=A*i;
		printf ("%d * %d = %d \n",A,i,M);
	}
	return 0;
}
