//program to find addition of all even no. from 0 to 20...
#include<stdio.h>
#include<conio.h>
void main()
{   
    system("cls");
    int i,b=0;
    for ( i = 0; i <= 20; i++)
    {
        if (i%2==0)
        {
            b=b+i;
        }
    }
    printf("addition of even no:%d",b);
}