// structure 
// edit marks of student if their marks are less than 40% (change to (original score + 5))
// display the grades using given rubric

/*
|       total       |   Grade   |
|      80 - 100     |     E     |
|      70 - 100     |     A     |
|      60 - 100     |     B     |
|      50 - 100     |     C     |
|      40 - 100     |     D     |
|     below 40%     |     E     |
*/

#include <stdio.h>

#define MAX_STUDENTS 2

struct StudentInformation
{
    int rollNo;
    char name[20];
    int h_marks, e_marks, m_marks, p_marks, c_marks;
};

struct StudentInformation ClassList[MAX_STUDENTS];

int main()
{
    printf("Q5\n");
    int totalMarks[MAX_STUDENTS];
    float percentage[MAX_STUDENTS];            

    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        int score = 0;
        printf("Student %d\n", i+1);
        printf("Enter the roll no. : ");
        scanf("%d", &ClassList[i].rollNo);
        printf("Enter the name (first name only) : ");
        scanf("%s", ClassList[i].name);
        
        printf("Enter marks for Hindi : ");
        scanf("%d", &score);
        if (score < 40)
        {
            score = score + 5;
        }
        ClassList[i].h_marks = score;

        printf("Enter marks for English : ");
        scanf("%d", &score);
        if (score < 40)
        {
            score = score + 5;
        }
        ClassList[i].e_marks = score;

        printf("Enter marks for Math : ");
        scanf("%d", &score);
        if (score < 40)
        {
            score = score + 5;
        }
        ClassList[i].m_marks = score;

        printf("Enter marks for Physics : ");
        scanf("%d", &score);
        if (score < 40)
        {
            score = score + 5;
        }
        ClassList[i].p_marks = score;

        printf("Enter marks for Chemistry : ");
        scanf("%d", &score);
        if (score < 40)
        {
            score = score + 5;
        }
        ClassList[i].c_marks = score;
        
        totalMarks[i] = ClassList[i].h_marks + ClassList[i].e_marks + ClassList[i].m_marks + ClassList[i].p_marks + ClassList[i].c_marks;
        percentage[i] = (float)totalMarks[i] / 5;
    }

    printf("\n - - - Final Grades - - -\n");
    printf("    ROLL NUMBER     |       PERCENTAGE      |       GRADE       |\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        char grade;

        if (percentage[i] >= 80)
        {
            grade = 'E';
        }
        else if (percentage[i] >= 70)
        {
            grade = 'A';
        }
        else if (percentage[i] >= 60)
        {
            grade = 'B';
        }
        else if (percentage[i] >= 50)
        {
            grade = 'C';
        }
        else if (percentage[i] >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'E';
        }

        printf("        %d                  %0.2f                  %c\n", ClassList[i].rollNo, percentage[i], grade);
    }
    printf("-----------------------------------------------------------------------------");

    return 0;
}