#include <stdio.h>
#include <string.h>

int main ()
{
    char password[64];
    int accepted;

    printf ("Please Enter the Password:\n");

    accepted = 0;
    while (!accepted)
    {
        fgets (password, sizeof(password), stdin);

        if (strcmp (password, "28\n") == 0) {
            printf ("Correct Password!\n");
            accepted = 1;
        } else {
            printf ("Incorrect Password. Please try again.\n");
        }
    }

    /* Other actions here */

    return 0;
}