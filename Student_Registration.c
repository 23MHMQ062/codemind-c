#include<stdio.h>
int main()
{
    int a,b,c,s,x,y,z;
    scanf("%d%d%d%d",&s,&a,&b,&c);
    scanf("%d%d%d",&x,&y,&z);
    int f=y-z;
    int g=b-c;
    if(a<=g&&x<=f)
    {
        printf("YES
YES");
    }
    else if(a<=g&&x>f)
    {
        printf("YES
NO");
    }
    else
    {
        printf("NO
YES");
    }
}