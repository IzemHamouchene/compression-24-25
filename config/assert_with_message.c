// assert_with_message.c
#include <stdio.h>
#include <stdlib.h>

void assert_with_message(int condition, const char* message) {
    if (!condition) {
        fprintf(stderr, "Error : %s\n", message);
        exit(EXIT_FAILURE);
    }
}