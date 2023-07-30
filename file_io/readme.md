Opening Files :
FILE *fopen( const char * filename, const char * mode );

Reading a File:
main.c
    read a single character from a file
      int fgetc( FILE * fp );

    read a string from a stream
      char *fgets( char *buf, int n, FILE *fp );

    read strings from a file, but it stops reading after encountering the first space character
      int fscanf(FILE *fp, const char *format, ...)

Closing a File :
int fclose( FILE *fp );

Writing a File :
    to write individual characters to a stream -
      int fputc( int c, FILE *fp );

      int fputs( const char *s, FILE *fp );

Binary I/O Functions:
    size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
              
    size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);