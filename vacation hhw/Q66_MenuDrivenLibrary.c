// menu driven program that shows working of a library
/*
program should 
1. add book info
2. display book info
3. list all books by a given author
4. list the title of a specific book
5. list the count of books in the library
6. list the books in the order of accession number
7. exit

make use of structure for all books
*/

#define MAX_BOOKS 100           // assuming that the maximum number of books in the library is 100

struct BookData                 // defined a structure for the books
    {
        int AccessionNumber;
        char title[50];
        char author[50];
        float price;
        int issuedStatus;
    };

struct BookData library[MAX_BOOKS];         // declared an array of BookData type for MAX_BOOKS size (100)

#include <stdio.h>

int currentBookCount = 0;

void AddBook(int NumOfBooks)        // function runs for n times (n is the number of new books the user wants to save)
{
    printf("\t\t--- ADD BOOK DATA ---\n\n");

    for (int i = 0; i < NumOfBooks; i++)
    {
        if (currentBookCount > MAX_BOOKS)
        {
            printf("Library is full, cannot add more books");
            break;
        }

        else
        {
            printf("\nBook %d of %d\n", i+1, NumOfBooks);
            struct BookData newBook;

            newBook.AccessionNumber = currentBookCount + i;

            printf("Enter the title of the book : ");
            scanf("%s", newBook.title);

            printf("Enter the name of the author : ");
            scanf("%s", newBook.author);

            printf("Enter the price of the book : ");
            scanf("%f", &newBook.price);

            newBook.issuedStatus = 0;

            library[currentBookCount] = newBook;        // saved book data to library array
            
            currentBookCount = currentBookCount + 1;        // increased count of books in libary by one

            printf("Book saved with Accession Number : %d\nSaved details : \n Title : \t%s\nAuthor : \t%s\nPrice : \t%0.2f\n", newBook.AccessionNumber ,newBook.title, newBook.author, newBook.price);
            printf("Book added successfully to the library\n");
        }
    }
    quitOrReturn();
}

void DisplayBook()
{
    if (currentBookCount == 0)
    {
        printf("There are no books in the library at the moment. consider adding data for books");
        main();
    }
    else
    {
        int AccessionKey;
        printf("\t\t--- DISPLAY INFORMATION FOR A BOOK ---\n");
        printf("Enter the accession number for the book to be displayed : ");
        scanf("%d", &AccessionKey);

        if (AccessionKey > currentBookCount || AccessionKey < 1)
        {
            printf("invalid input, please try again\nEnter an accession number : ");
            while (AccessionKey > currentBookCount || AccessionKey < 1)
            {
                scanf("%d", &AccessionKey);
            }
        }
        
        int found = 0;      // flag for book search

        int lower = 0, upper = currentBookCount - 1;        // declaring variables for binary search
        
        // binary search begins here
        while (lower <= upper)
        {
            int middle = (lower + upper) / 2;

            if (library[middle].AccessionNumber == AccessionKey)
            {
                found = 1;

                // print the book details
                printf("Book details are as follows : \n");
                printf("Accession number\t\t|\t\tBook title\t\t|\t\tAuthor\t\t|\t\tPrice\t\t|\n");
                printf("|\t\t%d\t\t|\t\t%s\t\t|\t\t%s\t\t|\t\t%0.2f\t\t", library[middle].AccessionNumber, library[middle].title, library[middle].author, library[middle].price);

                break;
            }
            else if (AccessionKey > library[middle].AccessionNumber)
            {
                lower = middle + 1;
            }
            else
            {
                upper = middle - 1;
            }
        }

        if (!found)
        {
            printf("Book with accession number %d was not found in the library\n", AccessionKey);
        }
        found = 0;
    }
    quitOrReturn();
}

void searchAuthor()
{
    printf("\t\t--- SEARCH BY AUTHOR NAME ---\n");
    char authorKey[50];
    printf("Enter the name of the author : ");
    scanf("%s", authorKey);
}

void searchTitle()
{
    printf("\t\t--- SEARCH BY BOOK TITLE ---\n");
    char titleKey[50];
    printf("Enter the title of the book : ");
    scanf("%s", titleKey);
    
}

int quitOrReturn()
{
    int choice;
    printf("\nPress\n1 : to return to main menu\n2 : to quit\n Enter your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        main();
    }
    else if (choice == 2)
    {
        return 0;
    }
    else
    {
        while(choice != 1 && choice != 2)
        {
            printf("invalid input. please try again");
            return quitOrReturn();
        }
    }
}

void countBooks()
{
    printf("There are currently %d books in the library\n", currentBookCount);
    quitOrReturn();
}

void listSortedFromAccession() {
    printf("\t\t--- ALL BOOKS (SORTED BY A.N.) ---\n");
    printf("| %-15s | %-30s | %-20s | %-12s | %-13s |\n", "Accession No.", "Book Title", "Author", "Price (INR)", "Issue Status");
    int totalWidth = 15 + 30 + 20 + 12 + 13 + 4; // Total width of the table
    for (int i = 0; i < totalWidth; i++) 
    {
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < currentBookCount; i++) 
    {
        printf("| %-15d | %-30s | %-20s | %-12.2f | %-13d |\n",
               library[i].AccessionNumber, library[i].title, library[i].author, library[i].price, library[i].issuedStatus);
    }
}


int menu()
{
    printf("--- MAIN MENU ---\n");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. Find books by an author\n");
    printf("4. Find a title in the library\n");
    printf("5. Total count of books in the library\n");
    printf("6. Display all books by A.N.\n");
    printf("7. Check all the currently available books\n");
    printf("8. Exit the program\n");
    printf("\nEnter your choice : ");
    
    int choice;
    scanf("%d", &choice);
    if (choice < 1 || choice > 8)
    {
        while (choice < 1 || choice > 8)
        {
            printf("Invalid input. Please try again\nEnter your choice : ");
            scanf("%d", &choice);
        }
    }
    return choice;
}



int main()
{
    int choice = menu();

    switch (choice)
    {
    case 1:
        printf("Enter the number of books you want to add in the library : ");
        int number; 
        scanf("%d", &number);
        AddBook(number);
        break;
    
    case 2:
        DisplayBook();
        break;

    case 3: 
        searchAuthor();
        break;
    
    case 4:
        searchTitle();
        break;
    
    case 5:
        countBooks();
        break;

    case 6:
        listSortedFromAccession();
        break;
    
    case 7:
        break;

    default:
        break;
    }
    return 0;
}