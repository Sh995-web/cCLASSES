#include<stdio.h>
#include<string.h>
int main()
{
char leftstr[]="bfb";
char rightstr[]="gfg";
int res=strcmp(leftstr,rightstr);
if(res==0)
	printf("strings are equal");
else
	printf("strings are unequal");
printf("value returned by strcmp() is:%d\n",res);
return 0;
}
