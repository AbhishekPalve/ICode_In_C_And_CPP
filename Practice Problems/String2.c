#include<stdio.h>

main()
{
     char str[50]="0", str1[50];
     int i=0,bound1=0, bound2=0;
     printf("Enter String 1: ");
     gets(str);
     printf("Enter String 2: ");
     gets(str1);
     while(str[bound1] && str1[bound2] && ++bound1 && ++bound2);
     if(bound1!=bound2)
          printf("Given Strings are NOT EQUAL");
     else
     {          
          for(i=0;i<bound2;i++)     
          if(str[i]==str1[i]);
          else
               break;
               
          if(i==bound2)
               printf("Given Strings are EQUAL");
          else
               printf("Given Strings are NOT EQUAL");
     }
}
