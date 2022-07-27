#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m=0,i=1;
    system("cls");
    printf("enter a number=");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            m=m+i;
        }
        i++;
    }
    printf("\naddition of factor=%d",m);
    if(m==n)
    {
        printf("\nit is perfect");
    }
    else
    {
        printf("\nit is not perfect");
    }
}
