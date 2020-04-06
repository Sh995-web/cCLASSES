#include<stdio.h>
int main(){
int tableof=0;
int incr=0;
int multi=0;
//int j=0;
//printf("write the tableof:");
//scanf("%d",&tableof);
tableof=2;
//for(tableof=2;tableof<=4;tableof++)
for(incr =1;incr<=12;incr++)
{
	multi=tableof*incr;
	printf("%d*%d=%d\n",tableof,incr,multi);
}		
tableof=3;
for(incr =1;incr<=12;incr++)
{
	multi=tableof*incr;
	printf("%d*%d=%d\n",tableof,incr,multi);
}	
tableof=4;	
for(incr =1;incr<=12;incr++)
{
	multi=tableof*incr;
	printf("%d*%d=%d\n",tableof,incr,multi);
}	
return 0;
}
