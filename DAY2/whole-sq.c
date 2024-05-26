//this program determines the closest integer to a square root//

//DAY 2 PROBLEM 3



#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	printf("The sqrt of given number is: %d\n",(int) sqrt(num));
	int square1 = sqrt(num);
	int square2 = square1+1;

	int dif1 = num - square1*square1;
	int dif2 = square2*square2 - num;

if(dif1 < dif2)

{
	printf("The closest whole number is : %d\n", square1*square1);
}
else
{
	printf("The closest whole number is : %d\n", square2*square2);
}

	return EXIT_SUCCESS;
}

