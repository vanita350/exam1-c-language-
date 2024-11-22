#include<stdio.h>

int main(){
	
	char ch;
	
	printf("enter the alphabet :");
	scanf("%d", &ch);
	
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
		switch (ch) {
			case 'a': 	case 'e':	case 'i':	case 'o':	case 'u':
				
			case 'A': 	case 'E':	case 'I':	case 'O':	case 'U':
				
				printf("%c is a viwel.\n", ch);
				break;
				
				default:
					printf("%c is a consonant \n", ch);
		}
	} else {
		printf("invalid input please enter an alphabet \n");
	}
}
