#include <stdio.h>

main()
{
     long x;
     printf("Enter a number");
     scanf("%ld",&x);
     while(x!=0)
     {
          x%=10;
          printf("%d",x);
          x/=10;
     }
}