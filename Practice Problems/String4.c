#include<stdio.h>

main()
{
     char str[50]="0";
     int i,j,len;
     printf("Enter String 1: ");
     gets(str);
     while(str[len] && ++len);
     for(i=0,j=len-1;i<len/2+1,j>=i;i++,j--)
          {
               if(str[i]==str[j])
                    continue;
               else
                    break;
               
          }
     if(i==len/2+1)
     printf("Given string is PALINDROME");
     else
     printf("Given string is NOT A PALINDROME");
}
