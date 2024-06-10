//Input a pipe separated sequence of words, sort them and print it with pipe separator

#include <stdio.h>
#include <string.h>

int main() {

    printf("Enter the words :\n");
    char str[100];
    char words[100][100];
    gets(str);
    char *token = strtok(str,"|");
    int j =0;
    
    while(token != NULL)
    {
        strcpy(words[j],token);
        token = strtok(NULL,"|");
        j++;
    }
    
     for(int i =0; i<j; ++i)
    {
        
        for(int k = i+1; k<j; ++k)
        {
           
            if(strcmp(words[i],words[k])>0)
            {
                 char temp[50];
                strcpy(temp,words[i]);
                strcpy(words[i],words[k]);
                strcpy(words[k],temp);
            }
        }
    }
    
    
    for(int i =0; i< j;++i)
    {
        if(i == j-1)
        {
            printf("%s",words[i]);
        }
        else{
        printf("%s | ",words[i]);}
    }
    

    return 0;
}

