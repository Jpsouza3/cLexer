#include <stdio.h>
#include "lexer.h"

void lexer_init(Lexer *lexer, const char *source) {
    lexer->start = source;
    lexer->current = source;
}

Token lexer_next_token(Lexer *lexer) {
    // TO DO: implementar classificador de tokens

    if (*lexer->start == '\0') {
        return (Token){
            .type = TOKEN_EOF,
            .start = lexer->start,
            .length = 0
        };
    }

    while (1) {
        if (*lexer->current == ' ') {

            Token t = {
                .type = TOKEN_IDENTIFIER,
                .start = lexer->start,
                .length = (int)(lexer->current - lexer->start)
            };

            lexer->current++;
            lexer->start = lexer->current;

            return t;
        }

        if(*lexer->current == '\0'){

            Token t = {
                .type = TOKEN_IDENTIFIER,
                .start = lexer->start,
                .length = (int)(lexer->current - lexer->start)
            };
            lexer->start = lexer->current;

            return t;
        }
        lexer->current++;
    }
}

void print_token(const Token *t)
{
    const char *p = t->start;

    for (int i = 0; i < t->length; i++, p++) {
        putchar(*p);
    }

    putchar('\n');
}

void get_tokens(Lexer *lexer, TokenList *tokenList) {
    tokenList->count = 0;

    for (int i = 0; i < 10; i++) {
        Token t = lexer_next_token(lexer);

        if (t.type == TOKEN_EOF) {
            break;
        }

        tokenList->tokens[i] = t;
        tokenList->count++;
    }
}