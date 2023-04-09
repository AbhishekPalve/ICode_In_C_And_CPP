#include<stdio.h>

main()
{
     char str[50]="0",temp;
     int i,j,len;
     printf("Enter String 1: ");
     gets(str);
     while(str[len] && ++len);
     for(i=0,j=len-1;i<len/2+1,j>=i;i++,j--)
          {
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
          }
     printf("Reverse of the given string is: [ %s ]",str);
}
