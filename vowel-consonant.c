#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
char a;
printf("enter the alphabet=");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
{
    printf("it is vowel");
}
else
{
    printf("it is consonant");
}
getch();
}