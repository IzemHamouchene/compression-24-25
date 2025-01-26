// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "grayScaleImage.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, int output){
    char message[100];
    int result = grayScaleImage(input1, input2);
    sprintf(message, "Inputs (%d, %d). Expected output should be %d. Actuel output = %d", input1, input2, output, result);
    assert_with_message(result == output, message);
}

int main() {
    // Test 1
    testMethod(2, 2, 32);

    // Test 1
    testMethod(20, 6, 960);
    return 0;
}