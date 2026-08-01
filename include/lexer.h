#ifndef LEXER_H
#define LEXER_H

typedef enum {
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_EOF
} TokenType;

typedef struct {
    TokenType type;
    const char *start;
    int length;     
} Token;

typedef struct {
    const char *start;
    const char *current;
} Lexer;

typedef struct {
    Token tokens[10];
    int count;
} TokenList;

void get_tokens(Lexer *lexer, TokenList *parser);

void print_token(const Token *t);

void lexer_init(Lexer *lexer, const char *source);

Token lexer_next_token(Lexer *lexer);

#endif