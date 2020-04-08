#include<stdio.h>
int main()
{
	int age=37;
	float fage=37.0;
	int *address_of_age=&age;
	float *faddress_of_age=&fage;
	printf("age:%d\n",age);
	printf("address of age:%p\n",&age);
	printf("address of age:%p\n",address_of_age);
	printf("value at address of age:%d\n",*address_of_age);
	printf("fage:%f\n",fage);
	printf("address of fage:%p\n",faddress_of_age);
	printf("value at address of fage:%f\n",*faddress_of_age);
return 0;
}
