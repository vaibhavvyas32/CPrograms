#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks.");
	scanf("%d",&marks);
	if(marks>=40)
		printf("pass");
	else
		printf("fail.");
		
	return 0;
}
