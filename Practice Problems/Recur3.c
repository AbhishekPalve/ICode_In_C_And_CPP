#include <stdio.h>

long check(int n)
{
     static long checker=1;
}

main()
{
     long n;
     printf("Enter an integer to see if its palindrome: ");
     scanf("%d",&n);
     check(n);
}