# Lexical Cursor Project

Built a tiny lexical analysis project as a vehicle to learn pointers in C.

### Features

Basically, `lexer.c` has two methods:

* `lexer_cursor`
* `print_token`

`lexer_cursor` receives a `char *`, which represents an input stream. It walks through the string using a cursor and separates it into tokens. When it finds a terminator (currently a space `' '`), it stores the token boundaries and calls `print_token`.

`print_token` receives a `char *` along with the token's start and end indexes, then prints the token.
