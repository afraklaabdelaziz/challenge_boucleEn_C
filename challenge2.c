#include<stdio.h>
int main(){
	int A,i,j,k;
	printf("donner un nombre ");
	scanf("%d",&A);
	
	
	for(i=0;i<A;i++)
	
	{
		for (j=0;j<(A-i);j++)
		{
	
		printf(" ");
		}
			for(k=0;k<((i+1)*2-1);k++)
			{
				printf("*");
			}
			
			printf("\n");
	}
	return 0;
}
