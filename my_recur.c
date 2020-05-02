#include<stdio.h>
int factorial(int);
int main(){
	int n=0;
	int fact=0;
	printf("find factorial of:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d! is %d\n",n,fact);
	return 0;
}
int factorial(int n){
	if(n<=1){
	return 1;
	}else{
	return(n*factorial(n-1));
	}
}

/*int main(){
	int n=0;
	int fact=0;
	printf("find factorial of:");
	scanf("%d",&n);
	fact=factorial(n);
	printf("%d! is %d\n",n,fact);
	return 0;
}*/
