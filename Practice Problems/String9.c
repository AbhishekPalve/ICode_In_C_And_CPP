#include <stdio.h>

main()
{
     char str[20],str1[20];
     int i=0,j=0;
     printf("Enter String 1 : ");
     gets(str);
     printf("Enter String 2 : ");
     gets(str1);


     while(str[i])
     {
               if(str[i]==str1[j])
               {
                    while(str1[j]  && str[i])
                    {
                         if(str[i]!=str1[j])
                              break;
                         i++;
                         j++;
                    }
                    if(str1[j]!='\0' && str[i]!='\0')
                    {
                         j=0;
                         i--;
                    }
                    else
                         break;
               }
          i++;
     }
     if(str1[j]=='\0')
          printf("Substring FOUND");
     else
          printf("Substring NOT FOUND");
}