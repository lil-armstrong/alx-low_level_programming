# 0x18. C - Dynamic libraries

-   What is a dynamic library, how does it work, how to create one, and how to use it
-   What is the environment variable $LD_LIBRARY_PATH and how to use it
-   What are the differences between static and shared libraries
-   Basic usage nm, ldd, ldconfig

**All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89**

## Tasks

1. Create the dynamic library libdynamic.so containing all the functions listed below:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.

### Solution

-   Generate the object files

    ```bash
    gcc -c -fPIC *.c
    ```

-   Consolidate all the object into a single library file

    ```bash
    gcc -shared -o libdynamic.so *.o
    ```

3. Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

```

```
