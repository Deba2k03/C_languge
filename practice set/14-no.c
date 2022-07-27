#include<stdio.h>
#include<conio.h>

void main()
{
system("cls");
   int x, y, *a, *b, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   printf("\n\nBefore Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("\n\nAfter Swapping\nx = %d\ny = %d\n", x, y);

getchar();
}