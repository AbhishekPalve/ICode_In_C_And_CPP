/*Consider all integer combinations of a b for 2 ≤ a ≤ 5 and 2 ≤ b ≤5
2^2 =4, 2^ 3 =8, 2^ 4 =16, 2^ 5 =32
3 ^2 =9, 3^ 3 =27, 3^ 4 =81, 3^ 5 =243
4^ 2 =16, 4^ 3 =64, 4^ 4 =256, 4^ 5 =1024
5^ 2 =25, 5^ 3 =125, 5^ 4 =625, 5^ 5 =3125
If they are then placed in numerical order, with any repeats
removed, we get the following sequence of 15 distinct terms:
4, 8, 9, 16, 25, 27, 32, 64, 81, 125, 243, 256, 625, 1024, 3125
How many distinct terms are in the sequence generated
by a b for 2 ≤ a ≤ 100 and 2≤ b ≤ 100*/
#include <stdio.h>
int main()
{
     int i,j,count=0,a=1,b=1,m=3,n=1,k,x;
     //for 2,4,8,16,32,64n
     for(i=2;i<=100;i*=2)
     {
          if(a==1)
               for(j=2;j<=100;j++)
                    count++;
          else
          {
               for(j=99-(98-m);j<=99;j++)
               {
                    if(j%n)
                         count++;
               }
               m+=2;   
          }
          n++;
          a++;          
     }
     //printf("%d\n", count);
     
     
     //for 3,9,27,81n
     for(i=2;i<=100;i*=3)
     {
          if(a==1)
               for(j=2;j<=100;j++)
                    count++;
          else
          {
               for(j=99-(98-m);j<=100;j++)
               {
                    if(j%n)
                         count++;
               }
               m+=2;   
          }
          n++;
          a++;          
     }
     //printf("%d\n", count);
     
     
     
     //10,100 also 7,49 and 6,36 and 5,25 
     for(k=1;k<=4;k++)
     {
          a=1;
          for(i=10;i<=100;i*=10)
          {
               if(a==1)
                    for(j=2;j<=100;j++)
                         count++;
               else
               {
                    for(j=99-(98-m);j<=99;j++)
                    {
                         if(j%2)
                              count++;
                    }
               }
               a++;
          }
     }
     //printf("%d\n", count);


     for(i=11;i<=99;i++)
          if(i!=16 && i!=25 && i!=32 && i!=36 && i!=49 && i!=64 && i!=81)
               for(j=2;j<=100;j++)
                    count++;
     printf("%d",count);
}