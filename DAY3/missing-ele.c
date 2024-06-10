// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int size,lower,diff;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the a[%d] element :\n",i);
        scanf("%d",&a[i]); 
    }
    
    lower = a[0];
    diff = lower - 0;
    
    for(int i=0;i<size;i++)
    {
        if(a[i]-i != diff)
        {
            while(diff < a[i]-i)
            {
            printf("\nThe missing element is : %d\n",i+diff);
            diff++;
            }
        }
    }
    
    return EXIT_SUCCESS;
}
