#include <stdio.h>

main()
{
     long x,i,j,num,count, flag=0;
     int arr[30];
     printf("Enter a number: ");
     scanf("%ld",&x);
     if(x<10)
          printf("Enter a number greater than 10");
     else{
          for(i=x; i>=10 && flag!=1;i--)
          {
               count=0;
               num=i;
               for(j=0;num!=0;j++)
               {
                    count++;
                    arr[j]=num%10;
                    num/=10;
               }
               for(j=0;j<=count-1;j++)
               {
                    if(!(arr[j]-arr[j+1]==1 || arr[j]-arr[j+1]==-1))
                         break;  
               }
               if(j==count-1)
               {
                    printf("%ld ",i);
                    flag=1;
               }

          }
     }

}