#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?
		(a>c)? 	printf("%d is greater",a):
				printf("%d is greater",c):
		(b>c)? 	printf("%d is greater",b);
	
	return 0;
	}
