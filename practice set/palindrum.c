//w.a.p to check the number is palindrum or not:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s,m=0;
printf("enter the number:");
scanf("%d",&n);
s=n;
while(n>0)
{
    r=n%10;
    m=(m*10)+r;
    n=n/10;
}
printf("\nreverse=%d",m);
if(s==m)
{
  printf("\nit is palindrum");
}
else
{
    printf("\nit is not palindrum");
}
getch();
}