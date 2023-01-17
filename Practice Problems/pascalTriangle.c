#include <stdio.h>

main()
{
     int i,j;
     char ch = ' ';
     for(i=1; i<=9;i++)
     {
          printf("%*c",19-2*i,ch);
          for(j=1;j <=i ; j++)
               printf("%d   ", i);
               printf("\n");
     }
}
