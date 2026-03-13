#include <stdio.h>

int main()
{
	int num1;
	int num2;
	char c;

	scanf("%d %d %c", &num1, &num2, &c);


	switch (c) {
	case '+':
		printf("%d", (num1+ num2));
		break;
	case '-':
		printf("%d", (num1- num2));
		break;
	case '*':
		printf("%d", (num1* num2));
		break;
	case '/':
		printf("%d", (num1/num2));
		break;

		default: 
			break; 
	}

    return 0;
}

