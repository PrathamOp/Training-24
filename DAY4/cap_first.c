//Input a sentence,Capitalize first letter of each word in the sentence.

#include <stdio.h>
#define MAX 100

int main()
{
    char str[MAX] = { 0 };
    int i;
    printf("Enter the sentence: \n");
    gets (str);

    for (i = 0; str[i] != '\0'; i++) {
       
        if (i == 0) {
            if ((str[i] >= 'a' && str[i] <= 'z'))
                str[i] = str[i] - 32; 
            continue; 
        }
        if (str[i] == ' ') 
        {
            ++i;
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32; 
                continue; 
            }
        }
        else {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }

    printf("Capitalized string is: \n%s\n", str);

    return 0;
}
