//w.a.p to find multiplication from first natural no.
#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,mult=1;
system("cls");
printf("enter n=");
scanf("%d",&n);
while(a<=n)
{
 mult=mult*a;
 a++;
}
printf("multiplication=%d",mult);
getch();
}