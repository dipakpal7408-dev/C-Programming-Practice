#include<stdio.h>
int main()
{
    int n, i;
    
    printf("Enter the value of n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)  // initialization: i=1; condition: i<=n; increment: i++ 
    {
        printf("%d", i); 
    }

    return 0;
}
