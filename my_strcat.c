#include<stdio.h>
#include<string.h>
int main()
{
	char src[50]="C CLASSES";
	char dest1[50]="tomorrow";
	char dest2[50]="6 AM";
	strcat(dest1,src);
	printf("src:%s\n",src);
	printf("dest1:%s\n",dest1);
	strncat(dest2,src,6);
	printf("dest2:%s\n",dest2);
return 0;
}
