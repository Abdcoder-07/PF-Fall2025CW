#include<stdio.h>
#include<string.h>
#include<time.h>
int main(){
	char *WeekDays[]={
	"Monday","Tuesday","Wednesday","Thursday","Friday"};
	srand(time(0));
	int value = rand() % (6)+0;
	printf("Day to do assignment is\n");
	printf("%s\n",WeekDays[value]);
	return 0;
}
