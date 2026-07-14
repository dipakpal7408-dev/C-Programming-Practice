#include<stdio.h>
int main()
{
    char ch;  // Declare a character variable to store the input character
    printf("Enter a character: ");    
    scanf(" %c", &ch);  // Read a character input from the user
    printf("ASCII value of %c is %d\n", ch, ch); // Print the ASCII value of the entered character
    return 0;
}