#include<stdio.h>

main()
{
     char str[50]="0";
     int i,j,count=0,count1=0,count2=0,bound1=0,flag;
     printf("Enter String 1: ");
     gets(str);
     while(str[bound1] && ++bound1);
     if(bound1&1)
          printf("Given sequence of paranthesis is NOT WELL FORMED");
     else
     {
          for(i=0;i<bound1;i++)
          {
               switch(str[i])
               {
                    case '{':
                         count++;
                         if(str[i+1] == ']' || str[i+1] == ')')
                         {
                              printf("Given sequence of paranthesis is NOT WELL FORMED");
                              flag=1;
                         }
                         break;
                    case '[':
                         count1++;
                         if(str[i+1] == '}' || str[i+1] == ')')
                         {
                              printf("Given sequence of paranthesis is NOT WELL FORMED");
                              flag=1;
                         }
                         break;
                    case '(':
                         count2++;
                         if(str[i+1] == ']' || str[i+1] == '}')
                         {
                              printf("Given sequence of paranthesis is NOT WELL FORMED");
                              flag=1;
                         }
                         break;
                    case '}':
                         count--;
                         break; 
                    case ']':
                         count1--;
                         break; 
                    case ')':
                         count2--;
                         break;
               } 
          }
     
          if(!(count) && !(count1) && !(count2) && flag!=1)
               printf("Given sequence of paranthesis is WELL FORMED");
     }
}