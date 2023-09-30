// Q8 counts the number of vowels and consonants in a paragraph entered by user

#include <stdio.h>

int main()
{
    char p;
    
    printf("Write a paragraph, press enter when you are done : \n\n");
    int vowels = 0, consonants = 0, spaces = 0;

    while (p != '\n')
    {
        scanf("%c", &p);
        if (p == '\n')
        {
            break;
        }
        
        if (p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u' || p == 'A' || p == 'E' || p == 'I' || p == 'O' || p == 'U')
        {
            vowels = vowels + 1;
        }
        else if (p == ' ')
        {
            spaces = spaces + 1;
        }
        else
        {
            consonants = consonants + 1;
        }
    }

    printf("\n");

    for (int i = 0; i<40; i++)
    {
        printf("-");
    }

    printf("\nAnalysis of the paragraph :\nVowels : %d\nConsonants : %d", vowels, consonants);

    return 0;
}