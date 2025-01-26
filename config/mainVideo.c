// config.c
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#include "compression.h"
#include "assert_with_message.h"

int testMethod(char* inputText, int output){
    char message[100];
    char* result = compression(inputText);
    sprintf(message, "Inputs (%s). Expected output should be (%s). Actuel output = (%s)", inputText, output, result);
    assert_with_message(strcmp( result, output ) != 0, message);
}

int main() {
    testMethod("aaaaabbbccdeeee", "#5abbbccd#4e");
    testMethod("aaaaabbbccddeee", "#5abbbccddeee");
    return 0;
}
