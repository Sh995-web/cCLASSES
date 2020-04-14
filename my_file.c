#include<stdio.h>
int main()
{
int i,n=2;
char str[50];
FILE *fptr=fopen("sample.txt","w+");
if(fptr==NULL);
{
printf("could not openfile");
return 0;
}
for(i=0;i<n;i++)
{
puts("enter a name");
scanf("%s",str);
fprintf(fptr,"%d,%s\n",i,str);
}
fclose(fptr);
return 0;
}
