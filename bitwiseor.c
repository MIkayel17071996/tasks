#include <stdio.h>

/*Write a program that will allow the user to enter an integer, 
if the fifth bit of the number is 0 it will set it to one and print it on the screen 
otherwise just print the number on the screen.*/

int main()
{
    int num = 1;
    
    do {
        printf("Please enter a positive integer number: ");
        scanf("%d", &num);
    } while ( num <= 0);

    num = num | 16;

    printf("This is the modified integer %d.\n", num);
    return 0;
}
