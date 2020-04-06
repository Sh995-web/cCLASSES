#include<stdio.h>
int main(){
int tableof=0;
int incr=0;
int multi=0;
//int j=0;
//printf("write the tableof:");
//scanf("%d",&tableof);
//tableof=1;
for(tableof=1;tableof<=4;tableof++){
printf("tableof %d is  starting\n",tableof);
	for(incr =1;incr<=12;incr++)
	{
		multi=tableof*incr;
		printf("%d*%d=%d\n",tableof,incr,multi);
	}
printf("tableof %d is  ending\n",tableof);		
}

return 0;
}
