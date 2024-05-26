/*THIS IS A CODE TO DISPLAY ARRAY*/
/*PROBLEM 1 DAY 2*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	printf("Enter the size of array: \n");
	scanf("%d",&size);

	int a[size];
	printf("Enter integers according to size: \n");

	for(int i=0;i <size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Displaying integers :\n");

	for(int i=0; i<size; i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n");

	/* FOR SEARCHING */
	int key;
	printf("Enter the integer to search : \n");
	scanf("%d",&key);

	for(int i=0;i<size;i++)
	{
		if (a[i]==key)
		{
		printf("Element found\n");
		break;
		}
		if(i==size-1)
		{printf("Not found\n");}

	}

	//calling sort func
	sort(size,a);
	
	/*Printing ascending order*/
	printf("Sorted ascending array order: \n");
	printAsc(size,a);
	printf("\t");

	return EXIT_SUCCESS;	
}

void sort(int size,int* a)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
		if(a[j] > a[j+1])
		{
		int temp = a[j];
		a[j] = a[j+1];
		a[j+1]=temp;
		}
		}
	}
}

void printAsc(int size,int* a)
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t\t",a[i]);
	}

}

