 #include<stdio.h>
 int main(){
	int A,i;
	printf("donner un nombre ");
	scanf("%d",&A);
	int d=0;
	for(i=1;i<=A;i++){
	if(A%i==0)
	d++;
		  }
		if(d==2){
	    printf("le nombre %d est premier",A);
			}
			else
		printf(" le nombre %d n'est pas premier",A);
      
	return 0;
}
