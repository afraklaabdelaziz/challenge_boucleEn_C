#include<stdio.h>
float add(int n,int m){
	int A=n+m;
	return A;
}
int main(){
	int a,b,somme;
	printf("donner le premier nombre :\n");
	scanf("%d",&a);
		printf("donner deuxieme nombre :\n");
	scanf("%d",&b);
	somme=add(a,b);
	printf("la somme de %d + %d = %d",a,b,somme);
	return 0;
	}
