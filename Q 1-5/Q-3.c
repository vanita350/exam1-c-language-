#include<stdio.h>

int main(){
	
	int n;
	
	printf("enter the positive integer n: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("enter a positive integer. \n");
	}
	
	printf("natural number in reverse order from %d to 1: \n",n);
	
	while (n >= 1){
		printf("%d ", n, n--);
	}
	printf("\n");
	return 0;
}
