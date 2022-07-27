//w.a.p to input persentage of a student & check his grade
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
int a;
printf("enter your persentage=");
scanf("%d",&a);
if(a>90)
{
    printf("grade=o");
} 
else if(a>75)
{
    printf("grade=A");
}
else if(a>60)
{
    printf("grade=B");
}
else if(a>50)
{
    printf("grade=C");
}
else if(a>40)
{
    printf("grade=D");
}
else
{
printf("fail");
}
getch();
}