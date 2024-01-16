#include<stdio.h>
int main()
{
    int n,rev=0,ld,fd,o;
    scanf("%d",&n);
    o=n;
while(n!=0)
 {
 ld=n%10;
 rev=rev*10+ld;
 n=n/10;
 }
 if(o==rev)
 {
     printf("True");
 }
 else
 {
     printf("False");
 }
}