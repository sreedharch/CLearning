This directive tells the CPP to replace instances of MAX_ARRAY_LENGTH with 20
  #define MAX_ARRAY_LENGTH 20

Macro Continuation (\) Operator:
main.c.2
  #define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n")

Stringize (#) Operator:
main.c.2
  stringize or number-sign operator ( '#' ), when used within a macro definition, converts a macro parameter into a string constant.

Token Pasting (##) Operator:
main.c.3
  It permits two separate tokens in the macro definition to be joined into a single token

Defined() Operator:
main.c.4
  The preprocessor defined operator is used in constant expressions to determine if an identifier is defined using #define.

Parameterized Macros:
main.c