
#include <stdio.h>
#include<stdlib.h>
  
  int main()
  {
      int n1,n2;
      int i,j,x,k=0;
      int c[1000];
      printf("Enter the size of 1st array : \n");
      scanf("%d",&n1);
      
      int a[n1];
      for(int i=0; i<n1; i++)
      {
          printf("Enter the a[%d] element of array1 : \n",i);
          scanf("%d",&a[i]);
      }
      
         printf("Enter the size of 2nd array : \n");
         scanf("%d",&n2);
      
         int b[n2];
         for(int i=0; i<n2; i++)
      {
          printf("Enter the b[%d] element of array2 : \n",i);
          scanf("%d",&b[i]);
      }

    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(a[i]==b[j])
            {
                int count = 0;
            
        for(x=0; x<k; x++)
            {
             if(a[i]==c[x])
                count++;
            }
            if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
    printf("Common Elements from two given Array are:\n");
    for(i=0; i<k; i++)
    {
        printf("%d ", c[i]);
    }
    return EXIT_SUCCESS;
}

	
