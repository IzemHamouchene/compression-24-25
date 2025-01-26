// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "coloredBitmap.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, char* unit, float output){
    char message[100];
    int result = coloredBitmap(input1, input2, unit);
    sprintf(message, "Inputs (%d, %d, %s). Expected output should be %f. Actuel output = %d", input1, input2, unit, output, result);
    assert_with_message(((result >= output - 0.2) && (result <= output + 0.2)), message);
}

int main() {
    testMethod(100, 50, "ko", 14.648438);

    testMethod(500, 300, "mo", 0.429153);

    testMethod(1024, 1024, "go", 0.002930);
    return 0;
}