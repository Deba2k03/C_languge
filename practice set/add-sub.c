//s=1-2+3-4+5......
#include<stdio.h>
#include<conio.h>
void main()
{
 int a=1,sum=0,n;
 system("cls");
 printf("enter n= ");
 scanf("%d",&n);
 while(a<=n)
 {
     if(a%2==0)
     {
         sum=sum-a;
     }
     else
     {
         sum=sum+a;
     }
     a++;
 }
 printf("result=%d",sum);
getch();
}