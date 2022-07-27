//w.a.p to check the number is amnstrong or not:
#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,s,m=0;
printf("enter the no:");
scanf("%d",&n);
s=n;
while(n>0)
{
    r=n%10;
    m=m+r*r*r;
    n=n/10;
}
if(s==m)
{
    printf("it is amnstrong");
}
else
{
   printf("it is not amnstrong");
}
getch();
}