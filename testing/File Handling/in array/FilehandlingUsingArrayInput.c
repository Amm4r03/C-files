// code will take input from user using loop and store in array
// then the code will save the results in a .txt file

#define MAX_SIZE 100

struct PersonalDetails 
{
    char FirstName[20];
    char Surname[20];
    int age;
};

#include <stdio.h>
int main()
{
    FILE *txtFile;      // declared pointer to text file

    txtFile = fopen("DataInput.txt", "a");      // file assigned to pointer (append mode)
    // if file doesnt exist, we will make a new file

    if (txtFile == NULL)
    {
        printf("Error opening the file");
        return 1;
    }

    struct PersonalDetails store[MAX_SIZE];

    printf("Hi! How much data do you want to add in the file today?\nEnter a number : ");
    int count;
    scanf("%d", &count);

    int CurrentCount = 0;

    // Read existing entries and count them
    while (fscanf(txtFile, "%s %s %d", store[CurrentCount].FirstName, store[CurrentCount].Surname, &store[CurrentCount].age) == 3) {
        CurrentCount++;
    }

    for (int i = 0; i < count; i++)
    {
        struct PersonalDetails Newperson;
        printf("Please enter the first name : ");
        scanf("%s", Newperson.FirstName);

        printf("Please enter the surname : ");
        scanf("%s", Newperson.Surname);

        printf("Please enter the age (in years) : ");
        scanf("%d", &Newperson.age);

        store[i] = Newperson;
        CurrentCount = CurrentCount + 1;

        fprintf(txtFile,"%s, %s, %d\n", Newperson.FirstName, Newperson.Surname, Newperson.age);

        printf("saved to data!\n");
    }
    
    printf("\ncurrent count in database : %d", CurrentCount);

    fclose(txtFile);        // close the file

    return 0;
}


/*
RESULT : 
This code is making a pointer toa  file called DataInput which is a text file
next the code opens this file using append mode and asks the user for how many data entries they want to make

the code checks the number of entries that are present in the text file already and adds newer data to 
the file as per the command of the user

the code then saves this in the text file and ends
*/