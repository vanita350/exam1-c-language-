#include<stdio.h>

int main(){
	int num, count = 0;
	
	printf("enter the number :");
	scanf("%d", &num);
	
	if (num < 0){
		num = -num;
	}
	
	for (; num > 0; num /= 10) {
		count++;
	}
	
	if (count == 0) {
		count = 1;
	}
	
	printf("the number of digits is :%d\n", count);
	
	return 0;
}
