//this is a program that sums up all the digits from the input
//DAY 2 PROBLEM 1



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int sum=0;
	printf("Enter the positive integer:\n");
	scanf("%d",&num);

	while(num>0)
	{
		int rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}
	printf("Sum of integers is %d\n", sum);

	return EXIT_SUCCESS;

}

