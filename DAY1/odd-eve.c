/*This program determines if the number is even or odd*/


#include<stdio.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter number: \n ");
	scanf("%d",&num);

	if(num%2 == 0)
	{
		printf("The given number is Even \n");
	}
	else {
		printf("The given number is Odd \n");
	}
	return(0);
}
		
