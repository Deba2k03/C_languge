//first enter input and press "=",and "enter" ......
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
int a[20],m,i;
char s;
printf("WEL COME");
printf("\n ");
scanf("%d",&m);
for(i=0;i<20;i++)
{
    printf(" ");
    scanf("%c",&s);
    switch (s)
    {
    case '+':
    printf(" ");
    scanf("%d",&a[i]);
    m=m+a[i];
    break;
    case '-':
    printf(" ");
    scanf("%d",&a[i]);
    m=m*a[i];
    break;
    case '/':
    printf(" ");
    scanf("%d",&a[i]);
    m=m/a[i];
    break;
    case '.':
    printf("=%d",m);

    }
}
getch();
}