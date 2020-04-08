#include<stdio.h>
#include<string.h>
int main()
{
char str1[50],str2[50];
strcpy(str1,"this is my intial string");
strcpy(str2,",add this");
printf("string after concatenation:%s\n",strncat(str1,str2,5));
printf("destination string str1:%s",str1);
return 0;
q}
