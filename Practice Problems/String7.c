#include<stdio.h>

main()
{
     char str[50]="0",temp;
     int i,j,len,k;
     printf("Enter String 1: ");
     gets(str);
     for(k=0;str[k]!='\0';k++)
     {
          len=k;
          while(str[len] !='\0' && str[len] != ' ' && ++len);
          for(i=k,j=len-1;i<len/2+1,j>=i;i++,j--)
          {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
          }
          k=len;
     }
     printf("Word reverseed string is: [ %s ]",str);
}
