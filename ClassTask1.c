#include<stdio.h>
#include<string.h>
main(){
	char Qualification[20];
	char Interview[20];
	printf("Enter your Qualification(BS/MS/PHD)\n");
	scanf(" %s",&Qualification);
	if(strcmp(Qualification,"MS")==0){
		printf("Enter your Interview Result(Pass/fail)\n");
		scanf(" %s",&Interview);
		if(strcmp(Interview,"Pass")==0){
			printf("You are hired\n");
		}else{
			printf("Sorry!Better luck next time.\n");
		}
	}else {
		printf("Not eligible,Qualification not matched.");
	}
}
