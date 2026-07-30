#include <stdio.h>
#include "lexer.h"

void print_token(char *s, int initial_index, int last_index){
    int current_index = 0;

    printf("token: ");

    while(current_index < last_index){
        if(current_index >= initial_index){
            printf("%c", *s);
        }
        s++;
        current_index++;
    }

    printf("\n");
}

void lexer_cursor(char *original){

    char *cursor = original;
    int index = 0;
    int last_token_index = 0;

    while(*cursor != '\0'){

        if(*cursor == ' '){
            print_token(original, last_token_index, index);
            last_token_index = index + 1;
        }
        cursor++;
        index++;
    }
    print_token(original, last_token_index, index);
}