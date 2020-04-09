#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="akash";
	char str2[]="akas";
	int result1=strncmp(str1,str2,4);
	int result2=strcmp(str1,str2);
	if(result1==0)
		printf("str1 is equal to str2 upto num characters\n");
	else if(result1>0)
		printf("str1 is greater than str2\n");
	else
		printf("str2 is greater than str1\n");
	printf("value returned by strncmp() is:%d",result2);
	return 0;
}
