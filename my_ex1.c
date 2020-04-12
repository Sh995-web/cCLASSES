#include<stdio.h>
int main() 
{
int var=10;
int *ptr;
ptr=&var;
printf("value of var=%d\n",*ptr);
printf("address of var=%p\n",ptr);
*ptr=20;
printf("after doing *ptr=20,*ptr id %d\n",*ptr);
return 0;
}
