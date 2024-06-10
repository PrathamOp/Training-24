//Calculate sum of positions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    char c;
    char substr[100];
    
    printf("Enter the string : \n");
    scanf("%[^\n]s",str);
    
    printf("Enter the character to be searched : \n");
    scanf(" %c",&c);
    
    printf("Enter the sub-string to be searched : \n");
    scanf("%s",substr);
    
    int n=strlen(str);
    int sublen = strlen(substr);
    
    int pos1=-1,pos2 =-1;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]== c)
        {
            pos1 = i;
            break;
        }
    }
    printf("%d\n",pos1);
    
   
    for(int i=0;i<n;i++)
    {
         int j=0,k=i;
        
        if(str[i]==substr[j])
        {
            while(j<sublen)
            {
            if(str[k]!= substr[j])
            {
             break;   
            }
            else
            { 
              j++;
              k++;
            }
         }
        }
        
    if(j == sublen)
    {
        pos2 = i;
        break;
    }
   
    }
     printf("%d\n",pos2);
      
     int ans = pos1 + pos2;
     printf("The sum of positions is %d",ans);
     return 0;
}

