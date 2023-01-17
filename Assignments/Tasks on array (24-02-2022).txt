//Name : Abhishek Palve
//Tasks on Array 
//Date: 24-02-2022
-----------------------------------------------------------------------------------------

//Task 1:
//write a C program to check how many times an element occurs in an array.
//(Note : input should be taken from the user).

#include<stdio.h>

main()
{
    int arr[20], count=0, key, i, n;
    printf("Enter no. of elements <=20 : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element no. [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to be found : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(arr[i]==key)
            count++;
    printf("Element %d is found %d times",key,count);
}
/*
OUTPUT:
Enter no. of elements <=20 : 8
Enter element no. [1] : 5
Enter element no. [2] : 4
Enter element no. [3] : 5
Enter element no. [4] : 6
Enter element no. [5] : 7
Enter element no. [6] : 8
Enter element no. [7] : 5
Enter element no. [8] : 6
Enter an element to be found : 5
Element 5 is found 3 times
*/

-----------------------------------------------------------------------------------------

//Task 2: 
//To reverse an array.
//(Note : input should be taken from the user).

#include<stdio.h>

main()
{
     int arr[20], i, n;
     printf("Enter no. of elements <=20 : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element no. [%d] : ",i+1);
          scanf("%d",&arr[i]);
     }
     printf("Reverse of given array is : [ ");
     for(i=n-1;i>=0;i--)
     {
          printf("%d",arr[i]);
          if(i==0)
               continue;
          printf(", ");     
     }
     printf(" ]");
}
/*
OUTPUT:
Enter no. of elements <=20 : 5
Enter element no. [1] : 2
Enter element no. [2] : 5
Enter element no. [3] : 6
Enter element no. [4] : 86
Enter element no. [5] : 90
Reverse of given array is : [ 90, 86, 6, 5, 2 ]
*/

-----------------------------------------------------------------------------------------

//Task 3:
//Write a C program to sort an array in descending order.
//(Note : input should be taken from the user).

#include<stdio.h>

main()
{
     int arr[20], i, j,n,temp;
     printf("Enter no. of elements wanted in array <=20 : ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          printf("Enter element no. [%d] : ",i+1);
          scanf("%d",&arr[i]);
     }
     // Sortintg
     for(i=0;i<n;i++)
          for(j=i+1;j<n;j++)
          {
               if(arr[i]<=arr[j])
               {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
          }
     //Printing the sorted array
     printf("The sorted array is : [ ");
     for(i=0;i<n;i++)
     {
          printf("%d",arr[i]);
          if(i==n-1)
               continue;
          printf(", ");     
     }
     printf(" ]");
}
/*
OUTPUT:
Enter no. of elements wanted in array <=20 : 5
Enter element no. [1] : 20
Enter element no. [2] : 30
Enter element no. [3] : 40
Enter element no. [4] : 5
Enter element no. [5] : 10
The sorted array is : [ 40, 30, 20, 10, 5 ]
*/
