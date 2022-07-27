//w.a.p to check the no. is greater then 100 or not,if yes check it is odd or even 
#include<stdio.h>
#include<conio.h>
void main()
{
 system("cls");
 int a;
 printf("enetr a number=");
 scanf("%d",&a);
 if(a>100)
 {
     if(a%2==0)
     {
         printf("it is greater then 100 and even");
     }
     else
     {
        printf("it is greater then 100 and odd");
     }
 }
 else
 {
printf("it is not greater then 100");
 }
getch();
}