/* header files go up here */
/* note that C comments are enclosed within a slash and
a star, and may wrap over lines */
// two slashes work too (and may be preferred)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// typedef struct keyValues{
//     int key;
//     char* values;
//     struct keyValues* next;
// } pairs;

// pairs* create_keyValues(int key, char* values) {
//         pairs* newPairs= malloc(sizeof(pairs)); // after typedef, we can use "pairs" name as a variable type in malloc
//         //or else can write as struct keyValues* newPairs= malloc(sizeof(struct keyValues)); 
//         if (NULL != newPairs){
//                 newPairs->key = key;
//                 newPairs->values=values;
//                 newPairs->next= NULL;
//         }
//         return newPairs;
// }

// void delete_words(pairs* oldWords) {
//         if (NULL != oldWords->next) {
//                 delete_words(oldWords->next);
//         }
//         free(oldWords);
// }

// pairs* add_word(words* wordList, char* word) {
//         words* newWords = create_words(word);
//         if (NULL != newWords) {
//                 newWords->next = wordList;
//         }
//         return newWords;
// }

// main returns an integer
// argc = command + 1 (the first command to append the program's name as first)
int main(int argc, char *argv[]) {
    int key_insert;
    char* values_insert;
    char** separator;
    //struct keyValues loopThrough[];
    char *currentCommand = NULL; 
    for (int i = 1; i < argc;i++)
    {
        currentCommand = argv[i];
        //simply print out bad command when the first argument in the command is not expected and move on to later commands
        if (argv[i][0] != 'p' && argv[i][0] != 'g' && argv[i][0]!='a' && argv[i][0]!='c' && argv[i][0]!='d'){
            printf("Bad command. Skipping this line %s\n", currentCommand);
        }
        else {
            printf("Command received - %s. Executing...\n", currentCommand);
        }
        // else if(argv[i][0] != 'p'){
        //     //originally i just declared a node, s1
        //     //problem: did not assign any memory space to it or pointer
        //     //the node also does not point into NULL
        //     // struct keyValues s1; 
        //     // separator=strsep(&argv[i],",");
        //     // s1.key=atoi(separator[1]);
        //     // s1.values=separator[2];

        // }
        // else if(argv[i][0] != 'g'){
        //     separator=strsep(&argv[i],",");

        // }
    }
        /* return 0 to indicate all went well */
        return(0);
}

