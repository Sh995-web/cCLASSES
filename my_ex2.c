#include<stdio.h>
int main() 
{
	int v[3]={10,100,200};
	int *ptr;
	ptr=v;
	for(int i=0;i<3;i++);
	{
		printf("value of *ptr=%d\n",*ptr);
		printf("value of ptr=%p\n",ptr);
		ptr++;
	}
return 0;
}
