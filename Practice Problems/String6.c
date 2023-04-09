#include<stdio.h>

main()
{
     char str[50]="0";
     int i,j,len=0;
     printf("Enter String 1: ");
     gets(str);
     
     //Remove Spaces and make case insensitive
     for (int i = 0; str[i] != '\0'; i++)
     {
          if((str[i]>96) && (str[i]<123))
               str[i]^=32;
          if (str[i] != ' ')
               str[len++] = str[i];         
     }
     str[len] = '\0';

     //Calculate Length
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