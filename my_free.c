#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,*ptr1;
int n,i;
n=5;
printf("enter number of elements:%d\n",n);
ptr=(int*)malloc(n*sizeof(int));
ptr1=(int*)calloc(n,sizeof(int));
	if(ptr==NULL||ptr1==NULL){
		printf("memory not allocated\n");
		exit(0);
}
	else{
		printf("memory successfully allocated\n");
		free(ptr);
printf("malloc memory successfully freed\n");
printf("\nmemory successfully allocated using calloc\n");
free(ptr1);
printf("calloc memory successfully freed\n");
}
return 0;
}
