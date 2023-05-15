// Assignment 11
/* The grading of students is done according to the following rules

Average Marks      Grade
    80-100           A
    70-79            B
    60-69            C
    50-59            D
    40-49            E
    0-39             F

Write a program to enter the marks of 5 subjects for each 5 students and display the grade of students */

#include <stdio.h>
int main()
{
    printf("Grade calculator\n");
    int i, students = 5, subjects = 5;          // declared 5 students and 5 subjects 
    float marks[students][subjects];            // initialised 2d matrix of 5 students with 5 subjects each 
    float avg[5];                               // initialised 1d matrix of size 5 for averages of all students
    char grade[5];                              // initialised 1d matrix of size 5 for grades
    int j = 0, sum;

    for (i = 0; i < students; i++)              // loop runs 5 times (no. of students) to record data for all students
    {
        printf("Enter marks for student %d : \n", i+1);     // used i+1 instead of i since i would return 0 for first student
        
        for (j = 0; j < subjects; j++)          // nested loop runs 5 times to store scores for all 5 subjects
        {
            printf("subject %d : ", j+1);
            scanf("%f", &marks[i][j]);

            while (marks[i][j] > 100 || marks[i][j]<0)      // the while loop here checks if the input is within the bounds of the grading system
                {                                           // if not, it prompts the user to enter the score again
                    printf("Invalid input. Score must be within 0 and 100\nPlease enter marks for subject %d : ", j+1);
                    scanf("%f", &marks[i][j]);
                }

            /* when the loop runs for the first time we would then enter the nested loop and then 
            that runs for 5 times
            After that the first loop runs for the second time thus we would
            be able to record marks for all 5 students for all 5 subjects*/

            sum = sum + marks[i][j];        // this will add all scores for each student
        }


        avg[i] = (float) sum / subjects;      // after the loop has run once, the avg will be calculated for a student

        if (avg[i]>=80 && avg[i]<=100)        // if else condition checking according to question
        {
            grade[i] = 'A';                   // i'th member of array given a character according to rules
        }
        else if (avg[i]>=70 && avg[i]<=79)
        {
            grade[i] = 'B';
        }
        else if (avg[i]>=60 && avg[i]<=69)
        {
            grade[i] = 'C';
        }
        else if (avg[i]>=50 && avg[i]<=59)
        {
            grade[i] = 'D';
        }
        else if (avg[i]>=40 && avg[i]<=49)
        {
            grade[i] = 'E';
        }
        else
        {
            grade[i] = 'F';
        }

        sum = 0;                        // set to 0 first to clear any values from previous calculations
        // the code at this point would then run once again and calculate score for other students or as loop commands
    }

    // now we have recorded marks and calculated the average for all students for all subjects

    // We shall now print the marks recorded and grade the students
    printf("\nThe calculated stats are as follows : \n");
    for (i = 0; i < students; i++)                      // loop will run for as many students (5) we have
    {
        printf("\n\nStudent %d -\n", i+1);
        printf("\t\tMarks\t\tGrade\n");                 // headings to make data more readable
        for (int j = 0; j < subjects; j++)              // nested loop to print scores of 1 student before moving to next
        {
            printf("Subject %d : ", j+1);
            if (marks[i][j]>=80 && marks[i][j]<=100)    // if else to check individual grade for all subjects
            {
                printf("\t%1.2f \t\tA\n", marks[i][j]);
            }
            else if (marks[i][j]>=70 && marks[i][j]<=79)
            {
                printf("\t%1.2f \t\tB\n", marks[i][j]);
            }
            else if (marks[i][j]>=60 && marks[i][j]<=69)
            {
                printf("\t%1.2f \t\tC\n", marks[i][j]);
            }
            else if (marks[i][j]>=50 && marks[i][j]<=59)
            {
                printf("\t%1.2f \t\tD\n", marks[i][j]);
            }
            else if (marks[i][j]>=40 && marks[i][j]<=49)
            {
                printf("\t%1.2f \t\tE\n", marks[i][j]);
            }
            else
            {
                printf("\t%1.2f \t\tF\n", marks[i][j]);
            }
            
        }
        printf("Average score : %0.2f\n", avg[i]);      // prints average score
        printf("Average grade : %c\n", grade[i]);       // and average grade
    }
    return 0;
}