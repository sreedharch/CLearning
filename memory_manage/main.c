#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char name[100];
  char *description;

  strcpy(name, "Zara Ali");

  // allocate memory dynamically
  description = malloc(30 * sizeof(char));

  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate memory\n");
  } else {
    strcpy(description, "This is a test.");
  }

  printf("Name: %s\n", name);
  printf("Description: %s\n", description);
  printf("\n");

  // to store bigger description
  description = realloc(description, 100 * sizeof(char));
  if (description == NULL) {
    fprintf(stderr, "Error - unable to allocate memory\n");
  } else {
    strcat(description, "Extended the description.");
  }

  printf("Name: %s\n", name);
  printf("Description: %s\n", description);

  // release memory
  free(description);
}