//w.a.p to display value=   1 1 1
 //                         2 2 2 
 //                         3 3 3
 //coding with Debashish
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int i,j;
  system("cls");
  for ( i = 1; i <= 3; i++)
  {
      for ( j = 1; j <= 3; j++)
      {
          printf("%d\t",i);
      }
      printf("\n");
  }
 getch();
 }