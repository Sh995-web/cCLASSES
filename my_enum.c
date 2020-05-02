#include<stdio.h>
typedef enum {
	monday,
	tuesday,
	wednesday,
	thursday,
	saturday,
	sunday,
	
}weekday;

int main(void) {
weekday day=monday;
if(day==monday){
printf("its monday",day);
}
else{
printf("its not a monday",day);
}
}
