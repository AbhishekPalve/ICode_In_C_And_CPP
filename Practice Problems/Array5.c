#include<stdio.h>

main()
{
     int arr[20], count=0, key, i,j, n,k;
     printf("Enter no. of elements <=20 : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element no. [%d] : ",i+1);
          scanf("%d",&arr[i]);
     }
     printf("Initial array with duplication is  : [ ");
     for(i=0;i<n;i++)
     {
          printf("%d",arr[i]);
          if(i==n-1)
               continue;
          printf(", ");     
     }
     printf(" ]\n");
     for(i=0;i<n;i++)
     {    
          for(j=i+1;j<n;j++)
          {
               if(arr[i]==arr[j])
               {
                    for(k=j;k<n;k++) 
                         arr[k]=arr[k+1];
                    n--; 
                    j-=1;
               }
               
          }
          
     }
     printf("Given array without duplication is : [ ");
     for(i=0;i<n;i++)
     {
          printf("%d",arr[i]);
          if(i==n-1)
               continue;
          printf(", ");     
     }
     printf(" ]");

}