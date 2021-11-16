#include<stdio.h>
#include<math.h>

int checkPrimeNumber(int i,int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(checkPrimeNumber(2,num) == 0)
        printf("%d is a prime number.\n",num);
    else
        printf("%d is not a prime number.\n",num);
}

int checkPrimeNumber(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return checkPrimeNumber(i+1,num);
    }
}
