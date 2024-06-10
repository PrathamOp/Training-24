  #include<stdio.h>
  #include<stdlib.h>
  
  int main()
  {
      int n1,n2,n3;
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
      int c[1000];
      n3 = n1 + n2;
      
      for(int i=0;i<n1;i++)
      {
          c[i] = a[i];
      }
      for(int i=0;i<n2;i++)
      {
          c[i + n1] = b[i];
      }
      
      printf("The array after merge sort is : \n");
      for(int i=0;i<n3;i++)
      {
      printf("%d \t\t",c[i]);
      }
      
      return EXIT_SUCCESS;
      
    }
 
