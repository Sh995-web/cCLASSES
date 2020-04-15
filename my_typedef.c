#include<stdio.h>
typedef enum{
monday,
tuesday,
wednesday,
thursday,
friday,
saturday,
sunday,
}weekday;

int main(void) {
	weekday day=monday;
if(day==monday)
{
	printf("it is monday");
}
else{
	printf("it is not monday");
}
}
