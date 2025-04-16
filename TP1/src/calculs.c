#include <stdio.h>
#include <stdbool.h>

int main() {
	int num1, num2;
	char op;
	bool nonvalide = true;

	while (nonvalide){
		printf("============================================\n");

        printf("Entrez num1 : ");
        scanf("%d", &num1);
		printf("\n");

		printf("Entrez num2 : ");
        scanf("%d", &num2);
        printf("\n");

        printf("Entrez une operation '+', '-', '*', '/' ");
        scanf(" %c", &op);
        printf("\n");
		
		switch (op){
			case '+':
				printf("%d + %d = %d", num1, num2, num1+num2);
				nonvalide=false;
				break;

			case '-':
				printf("%d - %d = %d", num1, num2, num1-num2);
				nonvalide=false;
				break;

			case '*':
				printf("%d * %d = %d", num1, num2, num1*num2);
				nonvalide=false;
				break;

			case '/':
				printf("%d / %d = %d", num1, num2, num1/num2);
				nonvalide=false;
				break;

			default:
				nonvalide = true;
		}
		printf("\n============================================\n");
    }
    return 0;
}

