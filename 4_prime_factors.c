#include <stdio.h>

void primeFactors(int a, int c);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nINPUT: %d\n",num);
    printf("OUTPUT: ");
    primeFactors(num,2);

 return 0;
}

void primeFactors(int num, int c)
{
    if(num <= 1)
    {
        return 0;
    }

    else if(num % c == 0)
    {
        printf("%d ",c);
        primeFactors(num / c, c);
    }

    else
    {
        primeFactors(num, c+1);
    }
}
