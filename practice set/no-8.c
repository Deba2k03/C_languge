#include <stdio.h>
#include <conio.h>
void prime();

void main()
{
    system("cls");
    int a, result;

    printf("Enter an integer to check whether it is prime or not > ");
    scanf("%d", &a);

    prime(a);

    getchar();
}

void prime(int n)
{
    int fl = 0, i;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            fl = 1;
        break;
    }
    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (fl == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }
}