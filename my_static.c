#include<stdio.h>
int incrAge();
int incrsAge();
int incrAge(){
	int age=0;
	age++;
	return age;
}
int incrsAge() {
	static int age=0;
	age++;
	return age;
}
int main() {
printf("normal call\n");
printf("%d\n",incrAge());
printf("%d\n",incrAge());
printf("%d\n",incrAge());
printf("static call\n");
printf("%d\n",incrsAge());
printf("%d\n",incrsAge());
printf("%d\n",incrsAge());
printf("%d\n",incrsAge());

return 0;
}
