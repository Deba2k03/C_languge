//w.a.p to find greater between two number:
#include<stdio.h>
#include<conio.h>
void main()
{
system("cls");
int a,b,c;
printf("enter three number=\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    {
        printf("%d is greater then %d,%d",a,b,c);
    }    
}
else if(b>c)
{
    printf("%d is greater then %d,%d",b,a,c);
}
else
{
    printf("%d is greater then %d,%d",c,a,b);
}
getch();
}