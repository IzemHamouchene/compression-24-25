#include <stdio.h>
#include <string.h>
#include "config/compression.h"
// Parameters:
//   input: Input Text to compress [length = 15]
// Return value
//   result[15] (compressed text using RLE algorithm)
char* compression(const char* input) {
    static char result[15];  // Static buffer for the result
    int inputLength = 10;    // Fixed input length
    int indexResult = 0;     // Index for the result array
    int count = 1;           // Counter for character repetitions

    for (int i = 1; i <= inputLength; i++) {
        // Check if the current character matches the previous one
        if (i < inputLength && input[i] == input[i - 1]) {
            count++; // Increment the repetition count
        } else {
            // Handle the encoding logic
            if (count > 3) {
                result[indexResult++] = '#';         // Add '#'
                result[indexResult++] = '0' + count; // Add the count as a character
                result[indexResult++] = input[i - 1];
            } else {
                for (int j = 0; j < count; j++) {
                    result[indexResult++] = input[i - 1];
                }
            }
            count = 1; // Reset the count for the next character
        }
    }

    result[indexResult] = '\0'; // Null-terminate the result
    return result;             // Return the static result array
}
