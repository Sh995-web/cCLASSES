#include<stdio.h>
int main(){
int n=0;
int i=0;
int p=0;
printf("enter the no\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
	printf("i:%d\n",i);
	if(n%i==0){
		printf("%d is divisible by %d\n",n,i);
		p=p+1;
	}
	else{
		printf("%d is not divisible by %d\n",n,i);
	}
}
printf("p:%d\n",p);
if(p==2){
	printf("%d is a prime no\n",n);
}
else{
	printf("%d is not a prime no\n",n);
}
return 0;
}
