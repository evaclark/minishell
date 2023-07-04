#include "lexer.h"

/* create lexer that breaks down command given in the input to
 seperate tokens for the parser to interpret.

 Seperates words from options eg.

 ls -l 

 ls will be turned into a token word
 -l will read the - and l seperately and will become an option token.