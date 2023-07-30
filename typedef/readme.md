typedef you can use to give a type a new name.
typedef unsigned char BYTE;
BYTE  b1, b2;

typedef vs #define :
main.c
#define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences −
    typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
    typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.