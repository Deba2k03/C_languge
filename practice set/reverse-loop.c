//w.a.p to find reverse of a number:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,m=0,r;
printf("enter the a no:");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    m=(m*10)+r;
    n=n/10;
}
printf("reverse=%d",m);
getch();
}