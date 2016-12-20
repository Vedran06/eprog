#include<stdio.h>
int main(){
	int grade;
	
	printf("Enter grade: ");
	scanf("%d", &grade);
	printf("Grade is: ");
	if(grade %3 == 0){
		printf("Pogi");
	}
	if(grade %5 == 0){
		printf("Ed");
	}
	if(grade %3,5 == 0){
		printf("Ed Pogi");
	}
}
