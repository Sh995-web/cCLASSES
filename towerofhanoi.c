#include<stdio.h>
void tower_of_hanoi(int ,char ,char ,char);
int main(){
int n=0;
printf("enter the number of disc:");
scanf("%d",&n);
tower_of_hanoi(n,'A','B','C');
return 0;

}

void tower_of_hanoi(int n,char frompeg,char topeg,char auxpeg){
if(n==1){
	printf("move disk %d from peg %c to peg %c\n",n,frompeg,topeg);
	return;
}
tower_of_hanoi(n-1,frompeg,auxpeg,topeg);
printf("\nmove disk %d from peg %c to peg %c\n",n,frompeg,topeg);
tower_of_hanoi(n-1,auxpeg,topeg,frompeg);
}
