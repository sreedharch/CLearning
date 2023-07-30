Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type.
Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

Passing Arrays as Function Arguments:
Formal parameters as a pointer −
    void myFunction(int *param) {
       .
       .
       .
    }
Formal parameters as a sized array −
    void myFunction(int param[10]) {
       .
       .
       .
    }
Formal parameters as an unsized array - 
    void myFunction(int param[]) {
       .
       .
       .
    }

Return array from function:
does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.
int * myFunction() {
   .
   .
   .
}

Pointer to an Array:
double balance[50];
balance is a pointer to &balance[0], which is the address of the first element of the array balance.
*(balance + 4) is a legitimate way of accessing the data at balance[4].