#include<stdio.h>
int main()
{
    int n,ld,fd;
    scanf("%d",&n);
    ld=n%10;
    while(n>10)
    {
        fd=n/10;
        n=n/10;
    }
    printf("%d",fd+ld);
}