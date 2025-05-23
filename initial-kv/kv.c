/* header files go up here */
/* note that C comments are enclosed within a slash and
a star, and may wrap over lines */
// two slashes work too (and may be preferred)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct keyValues{
    int key;
    char* values;
};

// main returns an integer
// argc = command + 1 (the first command to append the program's name as first)
int main(int argc, char *argv[]) {
    int key_insert;
    char* values_insert;
    for (int i = 1; i < argc;i++)
    {
        if (argv[i][0] != 'p' && argv[i][0] != 'g' && argv[i][0]!='a' && argv[i][0]!='c' && argv[i][0]!='d'){
            printf("bad command");
        }
        else if(argv[i][0] != 'p'){
            struct keyValues s1; 
            s1.key=atoi(argv[i][2]);
            s1.values=argv
            
        }
    }
/* return 0 to indicate all went well */
return(0);
}

