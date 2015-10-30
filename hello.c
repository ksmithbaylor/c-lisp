// @COMPILE cc -std=c99 -Werror -Wall -ledit

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {
    puts("C-Lisp version 0.0.2\nPress CTRL-C to exit.\n");

    while (1) {
        char *input = readline("clisp > ");
        add_history(input);

        printf("The user entered %s\n", input);

        free(input);
    }

    return 0;
}
