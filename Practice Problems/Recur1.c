#include <stdio.h>

long fact(int n)
{
     if(n==1)
          return 1;
     return n * fact(n-1);
}
main()
{
     int n,i;
     long sum=0,flag=0;
     printf("Enter a number from where sum of factorial is to be found out : ");
     scanf("%d",&n);
     for(i=n; i>=1;i--)
     {
          sum +=fact(i);
          if(i>1)
          printf("%d! + ",i);
          else
          printf("%d! = ",i);
     }
     printf("%ld", sum);

}