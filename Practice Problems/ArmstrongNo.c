//Armstrong Numbers
#include <stdio.h>

int main()
{
     int i,digit,power,sum=0,base=1,base1;
     printf("Enter a Digit : "),scanf("%d",&digit),printf("For digit "),power=printf("%d",digit);
     do
     {
          base = digit%10, i=1, base1=1;
          while(i<=power)
               base1*=base,i++;     
          sum+=base1;
     }while(digit/=10);
     printf(" the armstrong is : %d ", sum);
}