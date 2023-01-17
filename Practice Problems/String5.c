#include<stdio.h>

main()
{
     char str[50]="0", str1[50],temp,temp1;
     int i=0,len,j=0,bound1=0,bound2=0,count=0;
     printf("Enter String 1: ");
     gets(str);
     printf("Enter String 2: ");
     gets(str1);
     while(str[bound1] && str1[bound2] && ++bound1 && ++bound2);
     if(bound1!=bound2)
          printf("Given Strings are NOT ANAGRAMS");
     else
     {
          //Arrange 1st string in order
          for(i=0;i<bound1;i++)
               for(j=i+1;j<bound1;j++)
               {
                    if(str[i]>str[j])
                    {
                         temp=str[i];
                         str[i]=str[j];
                         str[j]=temp; 
                    }
               }
          //Arrange 2nd string in order
          for(i=0;i<bound1;i++)
               for(j=i+1;j<bound1;j++)
               {
                    if(str1[i]>str1[j])
                    {
                         temp1=str1[i];
                         str1[i]=str1[j];
                         str1[j]=temp1; 
                    }
               }

          for(i=0;i<bound2;i++)
               if(str[i]==str1[i]);
               else
                    break;
               
          if(i==bound2)
               printf("Given Strings are ANAGRAMS");
          else
               printf("Given Strings are NOT ANAGRAMS");         
     }
     
}
          