#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if (min>arr[i])
        min=arr[i];
    }
    printf("%d",min);
    
}