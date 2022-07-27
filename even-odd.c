//addition of all even no and all odd no from 0 to 50...
//coding with Debashish
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,b=0,c=0;
 system("cls");
 for ( i = 1; i <= 50; i++)
 {
     if(i%2==0)
     {
         b=b+i;
     }
     else{
         c=c+i;
     }
 }
     printf("\naddition of all even =%d",b);
     printf("\naddition of all odd no=%d",c);
getch();
}