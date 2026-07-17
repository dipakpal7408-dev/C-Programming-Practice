#include<stdio.h>
//function to check prime number 
int isPrime(int num)
{
    int i;

    if(num <= 1)
    return 0;

    for(i=2; i <= num/2; i++)
    {
        if(num % i == 0 )

        return 0;
    }

    return 1;

}

    int main()
    {
        int num;

        printf("Enter a number:");
        scanf("%d", &num);

        if(isPrime(num))
        printf("%d is a Prime Number.\n", num);

        else
        printf("%d is Not a Prime Number.\n", num);

        return 0;
    }
