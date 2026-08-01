# Lexical Cursor Project

Built a tiny lexical analysis project as a vehicle to learn pointers in C.

### Features

Basically, `lexer.c` these methods:

* `print_token`
* `lexer_init`
* `lexer_next_token`
* `get_tokens`

`print_token` receives a Token and prints its contents.

`lexer_init` initializes the Lexer struct with the input stream to be analyzed.

`lexer_next_token` walks through the input stream using two pointers and returns the next token.

`get_tokens` repeatedly calls `lexer_next_token` and stores the resulting tokens in a TokenList.
