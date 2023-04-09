#include<stdio.h>

main()
{
    int arr[20], pos[20],count=0, key, i,j=0, n;
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
        {    
            count++;
            pos[j++]=i+1;
        }
    printf("Element %d is found %d times at positions : [ ",key,count);
    for(i=0;i<count;i++)
    {
        printf("%d",pos[i]);
        if(i==count-1)
            continue;
        else if (i==count-2)
        printf(" and ");
        else
        printf(", ");
    }
    printf(" ]");
}