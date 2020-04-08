#include<stdio.h>
#include<string.h>
int main()
{
char leftstr[]="z f z";
char rightstr[]="g f g";
int res=strcmp(leftstr,rightstr);
if(res==0)
	printf("strings are equal");
else 
	printf("strings are unequal");
printf("\nvalue of result:%d",res);
return 0;
}
