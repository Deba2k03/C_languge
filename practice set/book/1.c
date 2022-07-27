//w.a.p to find the sum of only the even number out of'N' number input by the usur:...
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int i=1,N,n,sum=0;
 printf("enter N=");
 scanf("%d",&N);
 while(i<=N)
 {
     printf("enter input=");
     scanf("%d",&n);
     if(n%2==0)
     {
         sum=sum+n;
     }
     i++;
 }
 printf("sum of even=%d",sum);
}