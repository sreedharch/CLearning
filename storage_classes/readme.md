auto Storage Class:
auto storage class is the default storage class for all local variables.
{
   int mount;
   auto int month;
}
The example above defines two variables with in the same storage class.

register Storage Class:
register storage class is used to define local variables that should be stored in a register instead of RAM.
{
   register int  miles;
}
The register should only be used for variables that require quick access such as counters. It should also be noted that defining 'register' does not mean that the variable will be stored in a register.

static Storage Class:
static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope.
    making local variables static allows them to maintain their values between function calls.
    static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to the file in which it is declared. It causes only one copy of that member to be shared by all the objects of its class.

extern Storage Class:
extern storage class is used to give a reference of a global variable that is visible to ALL the program files.
When you have multiple files and you define a global variable or function, which will also be used in other files, then extern will be used in another file to provide the reference of defined variable or function.
