//Strong Numbers
#include <stdio.h>
int main()
{
     int base;
     long digit, limit, iterator=1L,sum=0, fact;
     printf("Enter a Limit upto which stromg numbers are to be listed : "),scanf("%d",&limit); 
     while(iterator<=limit)
     {
          digit=iterator,sum=0;
          do{
               base = digit%10,fact=1L;
               while(base)
                    fact*=base,base--;
               sum+=fact;
          }while(digit/=10);
          if(sum==iterator)
               printf("\n%ld",sum);
          iterator++;
     }
}