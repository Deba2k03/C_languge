
#include<stdio.h>
#include<conio.h>
void main()
{  
     system("cls");
    int a,b;
    char n;
    printf("Enter 1st value = ");
    scanf("%d",&a);
    printf("\nEnter 2nd value = ");
    scanf("%d",&b);
    printf("\nEnter any operater between  ( + , - , * , / ,  ) =\n");
    scanf("%c",&n);
    switch(n)
    {
     case '+':
     printf("%d + %d = %d",a,b,a+b);
     break; 
     case '-':
     printf("%d - %d = %d",a,b,a-b);
     break; 
     case '*':
     printf("%d * %d = %d",a,b,a*b);
     break; 
     case '/':
     printf("%d / %d = %d",a,b,a/b);
     break; 
     case '%':
     printf("%d % %d = %d",a,b,a%b);
     break;  
     default :
     printf("Wrong Input!!!!!!");
     break;  
    }

getch();
}