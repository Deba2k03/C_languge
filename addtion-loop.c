//addition from 1 to n loop or addition of first 'n' natural no:
#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,sum=0;
printf("enter n=");
scanf("%d",&n);
while(a<=n)
{
sum=sum+a;
a++;
}
printf("adition==%d",sum);
getch();
}