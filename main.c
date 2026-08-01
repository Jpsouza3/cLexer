#include <stdio.h>
#include "lexer.h"

int main(void){

    Lexer l;
    TokenList tl;
    const char *s = "lorem ipsum teste um dois";

    lexer_init(&l, s);

    get_tokens(&l, &tl);

    for(int i = 0; i < tl.count; i++){
        print_token(&tl.tokens[i]);
    }

    return 0;
}