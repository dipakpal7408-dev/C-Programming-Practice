#include<stdio.h>

//function to finde maximum number
int max(int a, int b)
{
  if(a>b)
    return a;
else
  return b;
}

int main()
{
    int num1, num2, result;

    printf("Emnter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    result = max(num1, num2);

    printf("Maximum number = %d\n", result);

    return 0;
}
