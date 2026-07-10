#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    printf("Enter the array elements : ");
    int arr[size];
    for(int i=0; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans[size];
    ans[0] = 1;
    for(int i =1;i<size;i++)
    {
        ans[i] = ans[i-1] * arr[i-1];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",ans[i]);
    }printf("\n");

    int right = 1;
    for(int i=size-1 ; i>=0 ; i--)
    {
        ans[i] *= right;
        right *= arr[i];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",ans[i]);
    }printf("\n");
}