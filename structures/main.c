#include <stdio.h>
#include <string.h>

struct Books {
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};
void printBook(struct Books *book);

int main() {
  struct Books book1; // declare book1 of type Books
  struct Books book2; // declare book2 of type Books

  // book1 specification
  strcpy(book1.title, "C Programming");
  strcpy(book1.author, "Nuha");
  strcpy(book1.subject, "C Programming tutorial");
  book1.book_id = 6495407;

  // book2 specification
  strcpy(book2.title, "Telecom Billing");
  strcpy(book2.author, "Zara");
  strcpy(book2.subject, "Telecom Billing Tutorial");
  book2.book_id = 6495700;

  /* print Book1 info */
  printf("Book1 Info:\n");
  printBook(&book1);

  printf("\n");
  /* print Book2 info */
  printf("Book2 Info:\n");
  printBook(&book2);
}

void printBook(struct Books *book) {
  printf("Book title : %s\n", book->title);
  printf("Book author : %s\n", book->author);
  printf("Book subject : %s\n", book->subject);
  printf("Book book_id : %d\n", book->book_id);
}