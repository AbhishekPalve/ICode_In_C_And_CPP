#include <stdio.h>

long fact(int x);
long envelope(int n)
{
     static long sum=1;
     if(n!=1)
          printf("%d! + ",n);
     else
          printf("%d! = ",n);
     if(n==1)
          return sum;
     sum+=fact(n);
}

long fact(int x)
{
     static int count=0;
     int n,ex=1;
     count++;
     if(x==1)
     {    
          n=count;
          count=0; 
          envelope(n-1);     
     }
     else
          ex=x*fact(x-1);
     return ex;
}

main()
{
     int n;
     printf("Enter a number from where sum of factorial is to be found out : ");
     scanf("%d",&n);
     printf("%ld",envelope(n));
}