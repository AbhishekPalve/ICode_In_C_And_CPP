#include<stdio.h>

main()
{
     int arr[20], i, j,n,temp;
     printf("Enter no. of elements wanted in array <=20 : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element no. [%d] : ",i+1);
          scanf("%d",&arr[i]);
     }
// Sortintg
     for(i=0;i<n;i++)
          for(j=i+1;j<n;j++)
          {
               if(arr[i]<=arr[j])
               {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
//Printing the sorted array
     printf("The sorted array is : [ ");
     for(i=0;i<n;i++)
     {
          printf("%d",arr[i]);
          if(i==n-1)
               continue;
          printf(", ");     
     }
     printf(" ]");
}