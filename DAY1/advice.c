/* This program gives advice to user by taking temp as input*/
/* PROBLEM 8*/


#include <stdio.h>

int main()
{
	int temp;

	printf("Enter temp: \n ");
	scanf("%d",&temp);


	if(temp >30)
	{
		printf("Its hot outside stay hydrated \n");
	}

	else if(temp >=20 && temp <= 30)
	{
		printf("The weather is nice and warm\n");
	}

	else if(temp >=10 && temp <=19)
	{
		printf("Its a bit chilly, wear a jacket");
	}

	else{
		printf("Stay warm");
	}
	return(0);
}

