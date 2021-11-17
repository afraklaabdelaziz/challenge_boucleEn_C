#include<stdio.h>
int main(){
	int m,a;
	printf("donner un nombre que vous voller inverser :\n");
	scanf("%d",&m);
	printf("l'inverse de %d est:\n",m);
	while(m!=0){
		
		a=m%10;
		printf("%d",a);
		m=m/10;
		
		}
		
			return 0;
}
