#include<stdio.h>

int main(){
	
	int num1, num2 , num3, lowest;
	
	printf("enter the first number :");
	scanf("%d", &num1);
	
	printf("enter the second number :");
	scanf("%d", &num2);
	
	printf("enter the third number :");
	scanf("%d", &num3);
	
	if(num1 < num2){
		if(num1 < num3){
			lowest = num1;
		} 
//		else if {
//				lowest = num3;
//		}
		 else {
				if(num2 < num3){
					lowest = num2;
				} else {
					lowest = num3;
				}
	}
	
	printf("the lowest number is :%d\n", lowest);
	
}
}
