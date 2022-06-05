// Let us work on the menu of a library. Create a structure containing book information like
// accession number, name of author, book title and flag to know whether book is issued or not.
// Create a menu in which the following can be done.
// 1 - Display book information
// 2 - Add a new book
// 3 - Display all the books in the library of a particular author
// 4 - Display the number of books of a particular title
// 5 - Display the total number of books in the library
// 6 - Issue a book
// (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets
// increased by 1)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     char b_title[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
      printf("\t\tMENU");
      printf("\n-------------------------------------\n");
      printf("PRESS 1.TO ADD BOOK DETAILS.");
      printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
      printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
      printf("\nPRESS 4.TO COUNT NUMBER OF BOOKS.");
      printf("\nPRESS 5.TO EXIT.");
      printf("\n-------------------------------------\n");
      printf("Enter Your Choice: ");
      scanf("%d",&ch);
    // Step 2 : Code to add Book Details
      switch(ch)
        {
          case 1:
            printf("\nHow Many Records You Want to Add: ");
            scanf("%d",&n);
            printf("-------------------------------------\n");
            printf("Add Details of %d Book\n",n);
            printf("-------------------------------------\n");
            for(i = 0 ; i < n ; i++)
            {
                 printf("Enter Book No.     : ");
                 scanf("%d",&b[i].b_no);
                 printf("Book Name          : ");
                 scanf("%s",b[i].b_name);
                 printf("Book Title          : ");
                 scanf("%s",b[i].b_title);
                 printf("Enter Author Name  : ");
                 scanf("%s",b[i].b_author);
                 printf("Enter No. of Pages : ");
                 scanf("%d",&b[i].no_pages);
                 printf("-------------------------------------\n");
            }
            break;
          case 2:
            printf("\n\t\tDetails of All Book");
            printf("\n-----------------------------------------------------------\n");
            printf("Book No.   Book Name\t  Author Name\tNo. of Pages");
            printf("\n------------------------------------------------------------");
            for( i = 0 ; i < n ; i++)
            {
                 printf("\n %d\t  %s\t  %s\t  %d",b[i].b_no,b[i].b_name,b[i].b_author,b[i].b_title,b[i].no_pages);
            }
            printf("\n\n");
            break;
// Step 4 : Code to display Book of a perticular author
          case 3:
            printf("\nEnter Author Name: ");
            scanf("%s",temp);
            printf("--------------------------------------");
            for( i = 0 ; i < n ; i++)
            {
                 if(strcmp(b[i].b_author,temp) == 0)
                 {
                      printf("\n%s\n",b[i].b_name);
                 }
            }
            break;
// Step 5 : Code to display no of books of perticular title
            printf("\nEnter Book Title: ");
            scanf("%s",temp);
            printf("--------------------------------------");
                  for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_title,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_title);
                         }
                    }
            break;
// Step 6 : Code to count number of books
          case 4 :
            for( i = 0 ; i < n ; i++)
            {
                 count++;
            }
            printf("\nTotal Number of Books in Library : %d\n",count);
            printf("-----------------------------------------\n");
            break;
// Step 7 : Code to exit  
            case 5 :
                    exit(0);
          }
     }while(ch != 5);
     return 0;
}