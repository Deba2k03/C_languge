//w.a.p to find addition and multiplication of all digit of a number:
#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,s=0,m=1;
printf("enter the number=");
scanf("%d",&n);
while(n>0)
{
    r=n%10;
    m=m*r;
    s=s+r;
    n=n/10;
}
printf("\naddition of all digit=%d",s);
printf("\nmultiplication of all digit=%d",m);
getch();
}