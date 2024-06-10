#include<stdio.h>
#include<stdlib.h>
#include<cal_func.h>

int main()
{
	int num1,num2;
	char c;

	printf("Enter the numbers : \n");
	scanf("%d %d", &num1,&num2);

	printf("Enter the operator :\n");
	scanf(" %c", &c);

	switch(c)
	{
		case '+' :printf("The addition is %d\n", sum(num1,num2));
			 break;
		
		case '-' :printf("The difference is %d\n", diff(num1,num2));
			 break;

		case '*' :printf("The product is %d\n", pro(num1,num2));
			 break;

		case '/' :printf("The division is %d\n", divide(num1,num2));
			 break;

		default :printf("ENTER CORRECT OPERATOR \n");
			  break;

	}

	return EXIT_SUCCESS;
}
