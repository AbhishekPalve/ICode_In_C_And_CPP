#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
     int cmp;
     char  str[50], str1[50];
     printf("Enter String 1: ");
     gets(str);
     printf("Enter String 2: ");
     gets(str1);
     cmp=strcmp(str,str1);
     printf("%d",cmp);

}