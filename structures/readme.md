Arrays allow to define type of variables that can hold several data items of the same kind.
Similarly structure is another user defined data type available in C that allows to combine data items of different kinds.Structures are used to represent a record.
  attributes about each book −
  Title
  Author
  Subject
  Book ID

struct [structure tag] {

   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];  
Eg:
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

To access any member of a structure, we use the member access operator (.)

Accessing Structure Members:
main.c.1

Structures as Function Arguments:
main.c.2

Pointers to Structures:
main.c
define pointers to structures - 
    struct Books *struct_pointer;
find the address of a structure variable, place the '&'; operator before the structure's name -
    struct_pointer = &Book1;
To access the members of a structure using a pointer - 
    struct_pointer->title;

Bit Fields:
struct packed_struct {
   unsigned int f1:1;
   unsigned int f2:1;
   unsigned int f3:1;
   unsigned int f4:1;
   unsigned int type:4;
   unsigned int my_int:9;
} pack;
the packed_struct contains 6 members: Four 1 bit flags f1..f3, a 4-bit type and a 9-bit my_int.
C automatically packs the above bit fields as compactly as possible, provided that the maximum length of the field is less than or equal to the integer word length of the computer