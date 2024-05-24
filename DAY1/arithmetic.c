/* This is a code to perform arithmetic operation between two numbers */
/*PROBLEM 1*/


#include<stdio.h>

int main()
{
	int num1, num2, result;
	printf("Enter the two numbers: \n");
	scanf("%d%d",&num1,&num2);

	int sum =  num1 + num2;
	printf("The sum of two numbers is : %d\n",sum);
	
	int sub = num1 - num2;
	printf("The sub of two numbers is : %d\n",sub);


	int product = num1 * num2;
	printf("The prod of two numbers is : %d\n",product);


	int div = num1 / num2;
	printf("The div of two numbers is : %d\n",div);
	
	return(0);
}
