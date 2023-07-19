#include <stdio.h>

// vowels are the letters a, e, i, o, and u.

int main()
{
    char letter = 0;
    do {
        printf("Please enter a letter: ");
        scanf(" %c", &letter);

    } while (!((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')));

    switch (letter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowels.\n", letter);
        break;
        
        default:
            printf("%c is a consonat.\n", letter);
        return 0;

    }
    
}
