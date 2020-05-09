#include<stdio.h>
#include<stdlib.h>
int main()
{
int*ptr;
int n,i;
n=5;
printf("enter the number of elements:%d\n",n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL){
	printf("memory not allocated\n");
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
n=10;
printf("\n\nenter the new size of the array:%d\n",n);
ptr=realloc(ptr,n*sizeof(int));
printf("memory successfully reallocated using realloc\n");
		for(i=5;i<n;++i){
		ptr[i]=i+1;
}
printf("the elements of the array are");
		for(i=0;i<n;++i){
		printf("%d",ptr[i]);
}
free(ptr);
}
return 0;
}
