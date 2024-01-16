#include<stdio.h>
int main()
{
    int n,i,sosq,sqos=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
 {
    sqos=sqos+i;
 }
int sqos1=sqos*sqos;
for(int j=1;j<=n;j++)
{
    if(j!=0)
    {
        sosq=j*j;
    }
    sum=sum+sosq;
    }
    printf("%d ",sqos1-sum);
}