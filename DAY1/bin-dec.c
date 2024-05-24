/*This is a code to convert binary to decimal*/
/*PROBLEM 4*/

#include<stdio.h>

int main ()
{
	int dec=0,bin,base=1,rem,num;
	printf("Enter the binary number:");
	scanf("%d",&bin);

	num=bin;
	while(bin!=0)
	{
		rem = bin%10;
		dec = dec + rem*base;
		bin = bin/10;
		base = base*2;
	}
	printf("Binary to decimal conversion is: %d\n",dec);
	return(0);
}
