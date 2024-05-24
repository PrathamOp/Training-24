/* This is a code to determine the area and circumference of circle */

/* PROBLEM 2 */


#include<stdio.h>
#define PI 3.14
#include<float.h>

int main()
{
	float radius,area,circum;
	printf("Enter the radius:\n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	printf("Area of the circle is:%f\n",area);
       circum = 2 * PI * radius;
	printf("Circumference of the circle is: %f\n", circum);
 	return(0);
}	

