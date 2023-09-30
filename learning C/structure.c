// trying structures

/*
Design a program in C that utilizes structures to create a Student Record Management System
The program should allow users to perform the following operations:

1. Add student record
2. Display Student Records
3. Search by Student ID
4. Update Student Details
5. Delete Student Record
6. Exit

Implement appropriate input validation and error handling to ensure the program's robustness
Use appropriate data structures and functions to efficiently manage student records
Remember to use structures to organize the student information and create a menu-driven
interface to facilitate user interaction with the program
*/

#include <stdio.h>
#define MAX_STUDENTS 100

struct studentInfo
{
    int id;             // identity number
    char name[20];      // name 
    int age;            // age
    char gender;        // gender
    char course[5];     // course code (5 character string)
};

struct studentInfo studentList[MAX_STUDENTS];

int numStudents = 0;    // initialise students in record as 0

void addStudentRecord()
{
    if (numStudents >= MAX_STUDENTS)
    {
        printf("Max number of students reached\nexiting...");
        return;
    }

    else
    {
        struct studentInfo newStudent;

        printf("Enter Student ID: ");
        scanf("%d", &newStudent.id);

        printf("Enter Name: ");
        scanf("%s", newStudent.name);

        printf("Enter Age: ");
        scanf("%d", &newStudent.age);

        printf("Enter Gender (M/F): ");
        scanf(" %c", &newStudent.gender);

        printf("Enter Course: ");
        scanf("%s", newStudent.course);

        studentList[numStudents++] = newStudent;
    }
    
}

void displayStudentRecord()
{
     if (numStudents == 0) {
        printf("No student records available.\n");
        return;
    }

    else
    {
        printf("Student Records:\n");
        for (int i = 0; i < numStudents; i++) 
        {
            printf("ID: %d\tName: %s\t Age: %d\t Gender: %c\t Course: %s\n", studentList[i].id, studentList[i].name, studentList[i].age, studentList[i].gender, studentList[i].course);
        }
    }
}

void searchByStudentID(int searchID) {
    for (int i = 0; i < numStudents; i++) {
        if (studentList[i].id == searchID) {
            printf("Student Found:\n");
            printf("ID: %d, Name: %s, Age: %d, Gender: %c, Course: %s\n",
                   studentList[i].id, studentList[i].name, studentList[i].age,
                   studentList[i].gender, studentList[i].course);
            return;
        }
    }
    printf("Student with ID %d not found.\n", searchID);
}


void loadStudentRecords() {
    FILE *file = fopen("student_records.csv", "r");
    if (file == NULL) {
        printf("No existing records found.\n");
        return;
    }

    while (fscanf(file, "%d,%19[^,],%d,%c,%4s\n", &studentList[numStudents].id,
                  studentList[numStudents].name, &studentList[numStudents].age,
                  &studentList[numStudents].gender, studentList[numStudents].course) == 5) {
        numStudents++;
    }

    fclose(file);

    printf("Student records loaded from 'student_records.csv'.\n");
}


int main() 
{

    loadStudentRecords();
    
    int choice, searchID, updateID, deleteID;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Search by Student ID\n");
        printf("4. Update Student Details\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                displayStudentRecord();
                break;
            case 3:
                printf("Enter Student ID to search: ");
                scanf("%d", &searchID);
                searchByStudentID(searchID);
                break;
            case 4:
                printf("Enter Student ID to update: ");
                scanf("%d", &updateID);
                // updateStudentDetails(updateID);
                break;
            case 5:
                printf("Enter Student ID to delete: ");
                scanf("%d", &deleteID);
                // deleteStudentRecord(deleteID);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 6);

    FILE *file = fopen("student_records.csv", "w");
    if (file == NULL) 
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    else
    {
        for (int i = 0; i < numStudents; i++) 
        {
            fprintf(file, "%d,%s,%d,%c,%s\n", studentList[i].id, studentList[i].name, studentList[i].age, studentList[i].gender, studentList[i].course);
        }
        fclose(file);

        printf("Student records saved to 'student_records.csv'.\n");
    }

    return 0;
}
