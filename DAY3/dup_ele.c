//PROGRAM TO FIND DUPLICATE ELEMENTS IN AN ARRAY
//DAY 3 PROBLEM 1


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,a[1000];
	printf("Enter the size of array: \n");
	scanf("%d",&num);
	
	for(int i=0; i<num; i++)
	{
		printf("Enter the numbers : \n");
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<num; i++)
	{
		for(int j=i; j<num-1; j++)
		{
			if(a[i] == a[j+1])
		{
		printf("The duplicate elements are : %d\n",a[i]);
		}
				
		}
	}


	return EXIT_SUCCESS;
}
