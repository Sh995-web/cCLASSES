#include<stdio.h>
#include<string.h>
//#include<iostream>
//using namespace std;
int main()
{
char dest[50]="this is an";
char src[50]="example";
strcat(dest,src);
printf("string after concatenation:%s",dest);
return 0;
}
