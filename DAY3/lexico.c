// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define COL 100

int main() {
    
    int size;
    printf("How many words do u want to enter? : \n");
    scanf("%d", &size);
    
    char str[size][COL], temp[50];
    
    printf("Enter the words : \n");
    
    for(int i =0; i<size; i++)
    {
        scanf("%s",str[i]);
    }
    
    for(int i =0; i<size; ++i)
    {
        for(int j = i+1; j<size; ++j)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    
    printf("\n THE WORDS IN LEXICOGRAPHICAL ORDER ARE : \n");
    
    for(int i =0; i< size;++i)
    {
        printf("%s \n",str[i]);
    }
    
    return EXIT_SUCCESS;
}
