#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int isAvailable;
};

struct Book library[MAX_BOOKS];
int totalBooks = 0;

void addBook();
void viewBooks();
void searchBook();
void deleteBook();

int main() {
    int choice;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: 
                printf("Thank you for using Library System!\n");
                return 0;
            default: 
                printf("Invalid choice! Try again.\n");
        }
    }
}

void addBook() {
    if (totalBooks >= MAX_BOOKS) {
        printf("Library is full!\n");
        return;
    }

    struct Book b;
    b.id = totalBooks + 1;

    printf("\nEnter Book Title: ");
    scanf(" %[^\n]s", b.title); // স্পেসসহ ইনপুট
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", b.author);

    b.isAvailable = 1;
    library[totalBooks++] = b;

    printf("Book added successfully!\n");
}

void viewBooks() {
    if (totalBooks == 0) {
        printf("No books available.\n");
        return;
    }

    printf("\n----- All Books -----\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].isAvailable ? "Available" : "Issued");
    }
}

void searchBook() {
    char title[100];
    int found = 0;

    printf("\nEnter title to search: ");
    scanf(" %[^\n]s", title);

    for (int i = 0; i < totalBooks; i++) {
        if (strcasecmp(library[i].title, title) == 0) {
            printf("\nBook Found:\n");
            printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                   library[i].id,
                   library[i].title,
                   library[i].author,
                   library[i].isAvailable ? "Available" : "Issued");
            found = 1;
            break;
        }
    }

    if (!found) printf("Book not found!\n");
}

void deleteBook() {
    int id, found = 0;
    printf("\nEnter book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id) {
            for (int j = i; j < totalBooks - 1; j++) {
                library[j] = library[j + 1];
            }
            totalBooks--;
            found = 1;
            printf("Book deleted successfully!\n");
            break;
        }
    }

    if (!found) printf("Book not found!\n");
}
