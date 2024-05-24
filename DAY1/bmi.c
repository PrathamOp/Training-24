/*This code calculates BMI by taking weight and height as input*/
/*PROBLEM 9*/


#include<stdio.h>
#include<float.h>

int main()
{
	double weight,height,bmi;
	printf("Enter your body weight in kg: ");
	scanf("%lf", &weight);
	
	printf("Enter your height in m: ");
	scanf("%lf", &height);

	bmi = weight / (height * height);
	printf("The bmi is %lf :\n", bmi);

	if(bmi < 18.5)
	{
		printf("Underweight\n");
	}

	else if(bmi >18.5 && bmi < 24.9)
	{
		printf("Normal weight \n");
	}
	
	else if(bmi >25 && bmi < 29.9)
	{
		printf("Overweight \n");
	}
	else 
	{
		printf("Obesity\n");
	}
	return(0);
}
