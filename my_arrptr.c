#include<stdio.h>
int main()
{
	int prices[3]={5,4,3};
	for(int i=0;i<3;i++)
	{
		printf("prices[%d]:%d\n",i,prices[i]);
		printf("add of prices[%d]:%p\n",i,&prices[i]);
	}
	printf("add of prices:%p\n",prices);
	printf("value at add of prices:%d\n",*prices);
	printf("value at add of prices+0:%d\n",*prices+0);
	printf("value at add of prices+1:%d\n",*(prices+1));
	printf("value at add of prices+2:%d\n",*(prices+2));
	return 0;
}

