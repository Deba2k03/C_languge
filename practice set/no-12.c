//coding with Debashish
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int choice, num,x, i,ar[100];
     int fact;
  while(1)
    {   
  int max, min, i, j, k;
  char a,b,c,d,z,e,f,g,h;
  int sum = 0, avg = 0;
  max = ar[0];
  min = ar[0];
        printf("\n\n          MENU            \n");
        printf("-----------------------------");
        printf("\na. print even value element \n");
        printf("b. print odd value element\n");
        printf("c. print the sum and avg\n");
        printf("d. print the maximum and minimum element\n");
        printf("e. remove the duplication from aray\n");
        printf("f. print the array in reverse order\n");
        printf("g. re-enter the array\n");
        printf("h. Exit\n");
        printf("----------------------------\n");

        printf("Enter your choice :  ");
        scanf("%d",&choice);  
        choice=getchar();   
        switch(choice)
        {
            case 'a':
       printf("Enter size of the array > ");
      scanf("%d", &x);
      printf("\nEnter array elements  >\n");
      for (i = 0; i < x; i++)
      {
      scanf("%d", &ar[i]);
      }
      printf("\nEven numbers in the array are =\n");
      for (i = 0; i < x; i++)
      {
        if (ar[i] % 2 == 0)
        {
          printf("%d\t", ar[i]);
        }
      }      
                break;       
            case 'b':
              printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &ar[i]);
  }
      printf("\n\nOdd numbers in the array are =\n");
      for (i = 0; i < x; i++)
      {
        if (ar[i] % 2 != 0)
        {
          printf("%d \t", ar[i]);
        }
      }
                    break;
            case 'c':
         printf("Enter size of the array > ");
        scanf("%d", &x);
       printf("\nEnter array elements  >\n");
      for (i = 0; i < x; i++)
      {
       scanf("%d", &ar[i]);
      }
       for (i = 0; i < x; i++)
      {
        sum = ar[i] + sum;
        avg = sum / x;
      }
      printf("\nSum of Array elements is > %d ", sum);
      printf("\nAverage of all Array elements is > %d\n ", avg);
                break;
            case 'd':
              printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
  scanf("%d", &ar[i]);
  }
      for (i = 0; i < x; i++)
      {
        if (max < ar[i])
        {
          max = ar[i];
        }
        if (min > ar[i])
        {
          min = ar[i];
        }
      }
      printf("\nMaximum digit in array is %d", max);
      printf("\nMinimum digit in array is %d", min);
      break;
      case 'e':
       printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &ar[i]);
  }
      for (i = 0; i < x; i++)
      {
        for (j = i + 1; j < x; j++)
        {
          if (ar[i] == ar[j])
          {
            for (k = j; k < x; k++)
            {
              ar[k] = ar[k + 1];
            }
            j--;
            x--;
          }
        }
      }

      printf("\n\nAfter deleting the duplicate element the Array is:\n");
      for (i = 0; i < x; i++)
      {
        printf("%d ", ar[i]);
      }
      break;
      case 'f':
        printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &ar[i]);
  }
      printf("\n\nArray in reverse order\n");

      for (i = x - 1; i >= 0; i--)
        printf("%d ", ar[i]);

      break;
      case 'g':
        printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &ar[i]);
  }
  /* printf("Enter size of the array > ");
  scanf("%d", &x);
  printf("\nEnter array elements  >\n");
  for (i = 0; i < x; i++)
  {
    scanf("%d", &ar[i]);
  }*/
  break;
            case 'h':
                exit(0); 
                default :
                printf ("   invalid input  ");   
        }   
   }
    return 0;
}