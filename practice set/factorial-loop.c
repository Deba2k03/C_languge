//w.a.p to find factorial of a number.
//n!=n*(n-1)*.........*1:
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
system("cls");
printf("enter the number: ");
scanf("%d",&n);
printf("\n the factor of %d are: ",n);
for(i=1;i<=n;++i)
{
    if(n%i==0)
    {
        printf("%d\t",i);
    }
}
getch();
}