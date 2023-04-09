#include<stdio.h>

main()
{
     int arr[20], i, n;
     printf("Enter no. of elements <=20 : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element no. [%d] : ",i+1);
          scanf("%d",&arr[i]);
     }
     printf("Reverse of given array is : [ ");
     for(i=n-1;i>=0;i--)
     {
          printf("%d",arr[i]);
          if(i==0)
               continue;
          printf(", ");     
     }
     printf(" ]");
}