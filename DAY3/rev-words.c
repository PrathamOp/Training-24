// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 3000

int main() {
    
    char str[MAX], rev[MAX];
    int i,len,Word_Start,Word_End,index;
    
    printf("Enter the string : \n");
    gets(str);
    
    len = strlen(str);
    index = 0;
    
    Word_Start = len - 1;
    Word_End = len - 1;
    
    while(Word_Start >0)
    {
        if(str[Word_Start] == ' ')
        {
            i = Word_Start +1;
            
            while(i <= Word_End)
            {
            rev[index] = str[i];
            i++;
            index++;
            }
            rev[index ++] = ' ';
            
            Word_End = Word_Start - 1;
        }
        
        Word_Start --;
    }
    
    for(i=0;i<=Word_End;i++)
    {
        rev[index] = str[i];
        index ++;
    }
    
    rev[index] = '\0';
    
    printf("Reversed ordered string is : %s \n",rev);
    

    return EXIT_SUCCESS;
}
