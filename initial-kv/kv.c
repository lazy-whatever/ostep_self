/* header files go up here */
/* note that C comments are enclosed within a slash and
a star, and may wrap over lines */
// two slashes work too (and may be preferred)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

//check https://stackoverflow.com/questions/252780/why-should-we-typedef-a-struct-so-often-in-c
//for difference between struct and typedef struct

// after typedef, we can use "pairs" name as a variable type in malloc
//or else can write as struct keyValues* newPairs= malloc(sizeof(struct keyValues)); 
typedef struct keyValues{
    int key;
    char* values;
    struct keyValues* next;
} pairs;

pairs* initializingOrAddDB(bool databaseEmpty, int key, char* values, pairs* existingLL){
   //if database is empty, create the first instance of the database
   
   if(databaseEmpty){
        //initialize a pair pointer
        pairs* newLL;
        //create a new node
        newLL=create_keyValues(key,values);
    }
    else{
        add_keyValues
    }

}
pairs* create_keyValues(int key, char* values) {
        //newPairs as a pointer to the newly allocated pair's memory
        //it is only able to point to struct type pairs

        //malloc function dynamically allocates memory space for 1 pair struct
        //malloc returns a void point pointing towards that memory location if succeful
        //we typecast the void pointer to a pair struct pointer
        pairs* newPairs= (pairs*)malloc(sizeof(pairs)); 
        if (newPairs != NULL){
                newPairs->key = key;
                newPairs->values=values;
                newPairs->next= NULL;
        }
        //returns a pointer to the memory location of the newly created node
        return newPairs;
}

// void delete_words(pairs* oldWords) {
//         if (NULL != oldWords->next) {
//                 delete_words(oldWords->next);
//         }
//         free(oldWords);
// }

pairs* add_keyValues(pairs* wordList, char* word) {
        pairs* KeyToAdd = create_keyValues(key,values)
        words* newWords = create_words(word);
        if (NULL != newWords) {
                newWords->next = wordList;
        }
        return newWords;
}

// main returns an integer
// argc = command + 1 (the first command to append the program's name as first)
int main(int argc, char *argv[]) {
    int key_insert;
    char* values_insert;
    char** separator;
    //struct keyValues loopThrough[];
    char *currentCommand = NULL; 
    bool databaseEmpty = 1;
    FILE *file =fopen("database.txt",r);
    if (file ==NULL){
        databaseEmpty = 1;
    }
    else{
        databaseEmpty = 0;
    }
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

