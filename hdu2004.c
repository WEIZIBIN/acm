#include <stdio.h>

int main (){
	char result;
	int input;
	while(scanf("%d", &input) != EOF){
		if(input <= 59 && input >= 0){
			printf("%c\n", 'E');
			continue;
		}
		else if(input <= 69 && input >= 60){
			printf("%c\n", 'D');
			continue;
		}
		else if(input <= 79 && input >= 70){
			printf("%c\n", 'C');
			continue;
		}
		else if(input <= 89 && input >= 80){
			printf("%c\n", 'B');
			continue;
		}
		else if(input <= 100 && input >= 90){
			printf("%c\n", 'A');
			continue;
		}
		else{
			printf("Score is error!\n");
		}
	}
	return 0;
}