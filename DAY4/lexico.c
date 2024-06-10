//Input a string, choose lexicographically consecutive characters and delete both.

#include <stdio.h>
#include <string.h>
#define SIZE 1000
 
int isLexico(char [], int );
 
int main()
{
    char str[SIZE];
    printf("Enter the String\n");
    fgets(str,SIZE,stdin);
    int len = strlen(str);
    do{
        char temp[100]="";
        int ptr = 0;
        int len = strlen(str);
        
        for(int i =0;i<len;i++){
            if(str[i] == str[i+1]-1){
                str[i]=' ';
                str[i+1]=' ';
                break;
            }
        }
        for(int i =0;i<len;i++)
        {
            if( (str[i] >= 'a' &&  str[i] <= 'z') || (str[i] >= 'A' &&  str[i] <= 'Z') )
            {
                temp[ptr++] = str[i];
            }
        }
        temp[ptr++]='\0';
        strcpy(str,temp);
        printf("value of updated str is: %s\n",str);
    }
    
    while(isLexico(str,strlen(str)));
    return 0;
}
 
int isLexico(char str[], int len)
    {
    for (int i = 1; i < len; i++)
    {
        if(str[i] == str[i-1]+1)
        {
            return 1;
        }
    }
    return 0;
}
