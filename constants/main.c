#include <stdio.h>

/*--------------USE OF #define pre-processor-------------*/
// #define LENGTH 10
// #define WIDTH 5
// #define NEWLINE '\n'

// int main()  {
//   int area;

//   area = LENGTH * WIDTH;
//   printf("Value of area: %d", area);
//   printf("%c", NEWLINE);

//   return 0;
// }

/*--------------USE OF const keyword-------------*/
int main() {
   const int  LENGTH = 10;
   const int  WIDTH = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}