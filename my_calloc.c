#include<stdio.h>
#include<stdlib.h>
int main()
{
int* ptr;
int n,i;
n=5;
printf("enter number of elements:%d\n",n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL){
	printf("memory not allocated \n");
	exit(0);
}
else{
	printf("memory successfully allocated using calloc\n");
		for(i=0;i<n;++i){
		ptr[i]=i+1;
}
	printf("the elements of the array are:");
		for(i=0;i<n;++i){
		printf("%d",ptr[i]);
}
}
}

