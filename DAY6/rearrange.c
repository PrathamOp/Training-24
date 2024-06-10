// Input 2 strings, check if you can rearrange the char of str1 to match str2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str1[100],str2[100];
    int found,not_found=0;
    printf("Enter the string 1 : \n");
    scanf("%[^\n]s",str1);
    printf("Enter the string 2 : \n");
    scanf(" %[^\n]s",str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(len1 == len2)
    {
        int len = len1;
        for(int i=0;i<len;i++)
        {
            found = 0;
            for(int j=0;j<len;j++)
            {
                if(str1[i]==str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
                {
                    not_found = 1;
                    break;
                }
        }
        if (not_found == 1)
            {
                printf("CANNOT REARRANGE \n");
            }
        else
            {
                printf("CAN REARRANGE \n");
            }
    }
    else
    {
        printf("ENTER SAME NO. OF STRINGS TO COMPARE : \n");
    }

    return 0;
}
