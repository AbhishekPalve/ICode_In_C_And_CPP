#include<stdio.h>

main()
{
     char strcat[100], str[50], str1[50];
     int i=0,len=0;
     printf("Enter String 1: ");
     scanf("%s",str);
     printf("Enter String 2: ");
     scanf("%s",str1);
     while((strcat[len]=str[len]) && ++len);
     while((strcat[len++]=str1[i]) && ++i);
     printf("Concatenated Strings: [ %s ] ",strcat);
}