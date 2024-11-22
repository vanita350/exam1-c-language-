#include<stdio.h>

int main(){
	float a, b, result;
	
	printf("enter the value of a:");
	scanf("%f",&a);
	
	printf("enter the value of b:");
	scanf("%f",&b);
	
	result = ( a*a + 2*a*b + b*b);
	
	printf("the resultof the formula a2 + 2*a*b + b2 is :%2f\n",result);
	
	return 0;
}
