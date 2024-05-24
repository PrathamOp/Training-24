/* This is a code to convert Temperature Degree to Farenheit and vice vers */
/* PROBLEM 3 */


#include<stdio.h>

int main()
{
	float deg,far;
	int choice;
	printf("Choose 1 to convert deg to far \n");
	printf("Choose 2 to convert far to def \n");
	scanf("%d", &choice);

	if(choice==1)
	{
		printf("Enter the temp : \n");
		scanf("%f", &deg);
		printf("The conversion of %f deg to far is %f \n",deg,far=(deg * 9/5) + 32);
	}

	else{
		printf("Enter the temp : \n");
		scanf("%f", &far);
		printf("The conversion of %f far to deg i %f  \n",far,deg =(far - 32)*5/9);
		}

		return(0);
		}
