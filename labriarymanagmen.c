#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
int i;
// Structure for storing book details
struct Book 
{
    int id;
    char title[50];
    char author[50];
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function to add a new book
void addBook()
 {
    if (bookCount >= MAX_BOOKS)
	{
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    struct Book newBook;
    printf("Enter Book ID: ");
    scanf("%d", &newBook.id);
    getchar(); 

    printf("Enter Book Title: ");
    gets(newBook.title);

    printf("Enter Author Name: ");
    gets(newBook.author);

    // Add the book to the library array
    library[bookCount++] = newBook;
    printf("Book added successfully!\n\n");
}

// Function to search for a book by title
void searchBook() {
    char searchTitle[50];
    int found = 0;
    getchar(); 
    
    printf("Enter the title of the book to search: ");
    gets(searchTitle);

    for (i = 0; i < bookCount; i++)
	 {
        if (strcmp(library[i].title, searchTitle) == 0) 
		{
            printf("Book found!\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("No book found with that title.\n");
    }
}

// Function to display all books in the library
void displayBooks() 
{
    if (bookCount == 0) {
        printf("No books available in the library.\n");
        return;
    }

    printf("Library Books:\n");
    for ( i = 0; i < bookCount; i++) 
	{
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n\n", library[i].author);
    }
}

int main() 
{
    int choice;

    while (1) 
	{
        // Menu for library management system
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

