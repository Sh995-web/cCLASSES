#include<stdio.h>
int main() {
int i=0;
unsigned long long int fact=1;
int n=0;
printf("find the factorial of:");
scanf("%d",&n);
for(i=n;i>=1;i--){
printf("i: %d\n",i);
fact=fact*i;
}

printf("fact: %llu\n",fact);
return 0;
}
