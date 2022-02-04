// Write a program to create a menu for a library in which the following can be done.
// 1 - Display book information
// 2 - Add a new book
// 3 - Display all the books in the library of a particular author
// 4 - Display the number of books of a particular title
// 5 - Display the total number of books in the library
// 6 - Issue a book
// DODs
// a) Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
// b) If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lib
{
    int acc_no;
    char author[20];
    char book_title[20];
};

int main()
{
    struct lib b[50];
    int ch, n, i, count = 0, flag = 0;
    char temp[40];  // Author
    char temp1[40]; // Book Title
    printf("* NOTE : USER SHOULD ADD BOOK BEFORE RUN THIS FURTHERMORE * \n\n");
    do
    {
        printf("\n 1 - Display book information\n 2 - Add a new book\n 3 - Display all the books in the library of a particular author\n 4 - Display the number of books of a particular title\n 5 - Display the total number of books in the library\n 6 - Issue a book\n 7 - Exit");
        printf("\n\n Choose Your options : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n\t\tDetails of All Book");
            printf("\n-----------------------------------------------------------\n");
            printf("Book No.   Book Name\t  Author Name");
            printf("\n------------------------------------------------------------");
            for (int i = 0; i < n; i++)
            {
                printf("\n %d\t  %s\t  %s\t  %d", b[i].acc_no, b[i].book_title, b[i].author);
            }
            printf("\n\n");
            break;
        case 2:
            printf("\nHow Many Records You Want to Add: ");
            scanf("%d", &n);
            printf("-------------------------------------\n");
            printf("Add Details of %d Book\n", n);
            printf("-------------------------------------\n");
            for (int i = 0; i < n; i++)
            {
                printf("Enter Book No.     : ");
                scanf("%d", &b[i].acc_no);
                printf("Book Name          : ");
                scanf("%s", b[i].book_title);
                printf("Enter Author Name  : ");
                scanf("%s", b[i].author);
                printf("-------------------------------------\n");
            }
            break;
        case 3:
            printf("\nEnter Author Name: ");
            scanf("%s", &temp);
            printf("--------------------------------------");
            for (i = 0; i < n; i++)
            {
                if (strcmp(b[i].author, temp) == 0)
                {
                    printf("\n%s\n", b[i].book_title);
                }
            }
            break;
        case 4:
            printf("\nEnter Book Title: ");
            scanf("%s", &temp1);
            printf("--------------------------------------");
            for (i = 0; i < n; i++)
            {
                if (strcmp(b[i].book_title, temp1) == 0)
                {
                    printf("\n%s\n", b[i].acc_no);
                }
            }
            break;
        case 5:
            for (i = 0; i < n; i++)
            {
                count++;
            }
            printf("\nTotal Number of Books in Library : %d\n", count);
            printf("-----------------------------------------\n");
            break;
        case 6:
            printf("\nEnter Book Title: ");
            scanf("%s", &temp1);
            printf("\nEnter Author Name: ");
            scanf("%s", &temp);
            printf("-----------------------------------------");
            for (i = 0; i < n; i++)
            {
                if (strcmp(b[i].book_title, temp1) == 0)
                {
                    if (strcmp(b[i].author, temp) == 0)
                    {
                        for (i = 0; i < n; i++)
                        {
                            count--;
                        }
                        printf("\nTotal Number of books in library : %d\n", count);
                        printf("-----------------------------------------\n");
                    }
                    else
                    {
                        printf("\nAuthor Name is Wrong, try again.");
                    }
                }
                else
                {
                    printf("Data is not valid, try again.");
                }
            }
            break;
        default:
            printf("Wrong Entry, run it again!");
            break;
        }
    } while (ch != 7);
    return 0;
}
