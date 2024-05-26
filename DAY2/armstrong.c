// C program to find an Armstrong number
// DAY 2 PROBLEM 4


#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    
    int num,temp,digit,arm=0;
    printf("Enter the number :\n");
    scanf("%d",&num);
    temp=num;
    
//    digit = 1 + log10(num);
  //  printf("The digits are : %d\n", digit);
    
    while(num > 0)
    {
    int rem = num % 10;
    arm = (rem*rem*rem) + arm;
    num = num/10;
    }
    
    if(temp == arm)
    {
        printf("%d is an armstrong number \n", temp);
    }
    else 
    {
        printf("%d is not an armstrong number \n",temp);
    }

    return EXIT_SUCCESS;
}
