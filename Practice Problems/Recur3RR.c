#include <stdio.h>

long sum=1,prev=1;
long fact(int x)
{
     printf("%d ",sum);
     if(x==1)
          return 0;
     else
          sum+=prev=x*prev-x*fact(x-1); 
          return 0;
}

main()
{
     int n;
     printf("Enter a number from where sum of factorial is to be found out : ");
     scanf("%d",&n);
     fact(n);
     printf("%ld ",sum);
}