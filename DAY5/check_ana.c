//Consider if they are anagrams or not, if yes then remove

#include <stdio.h>
#include <string.h>

int checkAnagram(char [], char []);
 

int main() {
    
    char str[1000];
    char words[100][100];
    
    printf("Enter the string : \n");
    scanf("%[^\n]s",str);
    
    char *t= strtok(str," ");
    int ptr = 0;
    
    while(t!=NULL)
    {
       strcpy(words[ptr],t);
       t = strtok(NULL, " ");
       ptr++;
    }
    // for(int i=0;i<ptr;i++)
    // {
    //     printf("%s ",words[i]);
    // }
    
    for(int i=0;i<ptr;i++)
    {
        int flag =1;
        for(int j=i+1;j<ptr;j++)
        {
            if(!strcmp(words[i],words[j]))
            {
                flag = 0;
               strcpy(words[j]," ");
            }
            else if (checkAnagram(words[i],words[j]))
            {
                flag = 0;
                strcpy(words[j]," ");
            }
        }
        if(flag == 0)
        {
            strcpy(words[i]," ");
        }
    }
    
    printf("The words after removing are : \n");
    for(int i=0;i<ptr;i++)
    {
        printf("%s ",words[i]);
    }
}
    int checkAnagram(char a[], char b[])
    {
    int hash1[26]={0};
    int hash2[26]={0};
    int n = strlen(a);
    int m = strlen(b);
    if(n!=m)
    {
        return 0;
    }
    for(int i = 0;i<n;i++)
    {
        int val = a[i]-'a';
        hash1[val]++;
    }
    for(int i = 0;i<m;i++)
    {
        int val = b[i]-'a';
        hash2[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(hash1[i]!=hash2[i])
        {
            return 0;
        }
    }
    return 1;
    }

