//This program determines if the number is automorphic or not 
//
//DAY 2 PROBLEM 3
// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num,square,extracted;
    printf("Enter the number:\n");
    scanf("%d", &num);
    
    square = num * num;
    printf("The square is : %d\n", square);
    
    int digit = 1 + log10(num);
    printf("The digits are : %d\n", digit);
    
    extracted = square % (int)pow(10,digit);
    printf("The extracted digit is %d\n", extracted);
    
    if(extracted == num)
    {
        printf("The number is automorphic \n");
    }
    else
    {
        printf("The number is not automorphic\n");
    }
    
    return EXIT_SUCCESS;

}

