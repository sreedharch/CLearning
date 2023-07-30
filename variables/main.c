#include <stdio.h>

//Variable declaration
extern int a, b;
extern int c;
extern float f;
int func();

int main() {
  //variable definition
  int a, b;
  int c;
  float f;

  //actual initialization
  a = 10;
  b = 20;

  c = a+b;
  printf("Value of c : %d\n", c);

  f = 70.0/3.0;
  printf("Value of f : %f\n", f);

  int i = func();
  printf("Value of i : %d\n", i);
  
  return 0;
}

int func() {
  return 1;
}
