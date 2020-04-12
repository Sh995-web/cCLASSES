#include<stdio.h>
void dosomething();
int add(int,int);
void dosomething(){
	printf("in dosomething\n");
}
int add(int a,int b)
{
	printf("in add\n");
return a+b;
}
int main()
{	
	dosomething();
	int x=2;
	int y=4;
	int z=0;
	z=add(x,y);
	printf("z:%d\n",z);
	return 0;
}
