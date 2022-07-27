#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
int i,n,sum=0,*arr;
 float avg;
printf("number of element u want to enter:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("enter the element:");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    avg=sum/n;
}
printf("sum =%d",sum);
printf("\navg=%f",avg);
getch();
}