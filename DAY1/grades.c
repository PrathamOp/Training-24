/* This program determines grades from user-given marks*/
/*PROBLEM 7 */


#include <stdio.h>

int main()
{
	int marks;

	printf("Enter marks: \n ");
	scanf("%d",&marks);


	if(marks >=90 && marks <=100)
	{
		printf("A Grade");
	}

	else if(marks >=80 && marks <= 89)
	{
		printf("B Grade");
	}

	else if(marks >= 70 && marks <= 79)
	{
		printf("C Grade");
	}

	else if	(marks >= 60 && marks <= 69)
	{
		printf("D Grade");
	}
	else{
		printf("F Grade");
	}
	return(0);
}

