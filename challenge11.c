#include<stdio.h>
int main(){
	int T[30],N,i,y;
	printf("donner nombre des collone de votre tableau");
	scanf("%d",&y);
	for(i=0;i<y;i++){
		printf("T[%d]",i);
		scanf("%d",&T[i]);
		}
		printf("donner un nombre que vous voler trouver sa position dans le tableau:");
	    scanf("%d",&N);
		 for(i=0;i<10;i++){
			if(T[i]==N){
			printf("la position de ce nombre est %d\n",i);
			return 0;
		}
		
		}
		printf("ce nombre n'est existe pas dans le tableau");
	return 0;
}
