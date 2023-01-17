#include <stdio.h>

main()
{
     long m,n,difference,c1,c2;
     printf("Enter a number(N): ");
     scanf("%ld",&n);
     printf("Enter a number(M): ");
     scanf("%ld",&m);
     difference=n%m;
     c1=n+difference;
     c2=n-difference;
     if(!(c1%m) && !(c2%m))
          if(c1>c2)
               printf("%ld",c1);
          else
               printf("%ld",c2);
     else if(!(c1%m))
          printf("%ld",c1);
     else if(!(c2%m))
          printf("%ld",c2);

}