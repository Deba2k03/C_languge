//w.a.p to find s=1square + 2square +........nsquare;
#include<stdio.h>
#include<conio.h>
void main()
{
int r=1,m=0,n;
printf("enter a number=");
scanf("%d",&n);
while(r<=n)
{
 m=m+r*r;
 r++;
}
printf("adition of square=%d",m);
getch();
}