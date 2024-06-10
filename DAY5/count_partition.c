
//Print the count of partitions

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter the string: ");
    scanf("%s", str);
    int n = strlen(str);
    
    int total_consonants = 0;
    for (int i = 0; i < n; i++) 
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') 
        {
            total_consonants++;
        }
    }
    
    int valid_partitions = 0;
    for (int i = 1; i < n; i++) 
    {
        int left_consonants = 0;
        for (int j = 0; j < i; j++) 
        {
            if (str[j] != 'a' && str[j] != 'e' && str[j] != 'i' && str[j] != 'o' && str[j] != 'u') 
            {
                left_consonants++;
            }
        }
        int right_consonants = total_consonants - left_consonants;
        
        if (left_consonants > right_consonants) {
            valid_partitions++;
        }
    }
    
    printf("Number of valid partitions: %d\n", valid_partitions);
    return 0;
}

