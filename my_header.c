#include<stdio.h>
#include "my_calculate_age.h"
int main(void){
	int syear=0;
	printf("enter the year:");
	scanf("%d",&syear);
	printf("%u\n",calculateage(syear));
}
