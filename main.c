#include <stdio.h>
#include "lexer.h"

int main(void){
    char *s = "lorem ipsum";
    lexer_cursor(s);
    return 0;
}