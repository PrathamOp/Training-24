#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 3000

int main()
{
    int temp;
    char a[MAX];
    char check[MAX];
    printf("Enter the string : \n");
    scanf("%s",a);
    strcpy(check,a);
    //strcpy(store,a);
    int len = strlen(a);
    
    for(int i=0,j=len-1;i<j;i++,j--)
    {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
    }
    printf("String after reverse is : %s \n",a);
    
    if(strcmp(a,check)==0)
    {
    printf("\nIt is a Palindrome \n ");
    }
    else
    printf("\nNot a palindrome \n");
   
    return EXIT_SUCCESS;
}
