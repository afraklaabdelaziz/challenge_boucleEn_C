#include<stdio.h>
#include<stdbool.h>
bool isPremier(int N) 
{
	bool T=true;
	int i;
	 
	 for(i=2;i<N;i++)
	 {
	 	
	 	if(N%i==0)
		 {
	 		T = false;
	     }
		 	  
     } 
	 	 if(T == true)
	       printf(" %d est premier",N);
	     
		 else 
	       printf(" %d n'est pas premier",N);
     
	 return T;
}
int main(){
	int M;
	printf("donner un nombre:\n");
	scanf("%d",&M);
	isPremier(M);
	return 0;
}
