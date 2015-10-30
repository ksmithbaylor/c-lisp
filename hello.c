#include <stdio.h>
#include <stdlib.h>

static char input[2048];

int main(int argc, char** argv) {
    puts("C-Lisp version 0.0.1\nPress CTRL-C to exit.\n");

    while (1) {
        fputs("clisp > ", stdout);
        fgets(input, 2048, stdin);
        printf("The user entered %s", input);
    }

    return 0;
}
