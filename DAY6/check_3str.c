//Input 3 strings, check if you can write both str1 and str2 using str3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char hash1[26] = {0};
    char str1[100],str2[100],str3[100];
    printf("Enter the string 1 : \n");
    scanf("%[^\n]s",str1);
    printf("Enter the string 2 : \n");
    scanf(" %[^\n]s",str2);
    printf("Enter the string 3: \n");
    scanf(" %[^\n]s",str3);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len3 = strlen(str3);
    
    for(int i=0;i<len3;i++)
    {
        hash1[str3[i] - 'a']+=1;
     }
    for(int i=0;i<len1;i++)
    {
        hash1[str1[i]-'a']-=1;
     }
    for(int i=0;i<len2;i++)
    {
        hash1[str2[i]-'a']-=1;
    }
    
    for(int i=0;i<26;i++)
    {
        if(hash1[i]!=0)
        {
          printf("CANNOT REARRANGE \n");
          return 0;
        }
    }
    printf("CAN REARRANGE \n");

    return 0;
}

