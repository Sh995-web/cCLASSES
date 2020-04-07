#include<stdio.h>
#include<string.h>
int main() 
{
	char leftstr[]="g f g";
	char rightstr[]="g g g";
	int res=strcmp(leftstr,rightstr);
	printf("res:%d\n",res);
return 0;
}
