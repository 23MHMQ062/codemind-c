#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sq=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
 {
    sq=sq+sqrt(i);
     
 }
 printf("%.2f",sq);
 }