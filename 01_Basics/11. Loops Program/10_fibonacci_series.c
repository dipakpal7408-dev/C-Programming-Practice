#include<stdio.h>
int main()
{
    int n, i;
    int first = 0, second =1, next;

    printf("Enter the number of turms:");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i= 1; i<= n; i++)
    {

        printf("%d", first);

        next = first + second;
        first = second;
        second = next;

    }

    return 0;
    
}

output:
Enter the number of turms: 6
    Fibonacci Series: 0 1 1 2 3 5 
