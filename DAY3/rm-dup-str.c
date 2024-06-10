#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 3000

int main()
{
    char a[MAX];
    char s[MAX];
    int k=0;
    printf("Enter the string : \n");
    scanf("%s",a);
    int len = strlen(a);
    int i,j;
    int count =1;
    
    for(int i=0;i<len-1;i++)
    {
        
        if(a[i]!= ' ')
        {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
            count ++;
            a[i] = ' ';
            }
        }
    }
    }
    for(int i=0;i<len;i++)
    {
        if(a[i]!=' ')
        {
          s[k] = a[i];
          k++;
        }
    }
    printf("%s",s);
   
    return EXIT_SUCCESS;
}
