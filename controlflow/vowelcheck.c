#include <stdio.h>

int main()
{
    char n;

    printf("Enter the alphabet you want to check if vowel or not: ");
    scanf("%c", &n);

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
    {
        printf("The alphabet you entered is a vowel");
    }
    else
    {
        printf("The alphabet you entered is a consonant");
    }

    return 0;
}