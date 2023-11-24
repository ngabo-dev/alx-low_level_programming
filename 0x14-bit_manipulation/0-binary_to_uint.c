#include <stdio.h>
#include <limits.h>

unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return UINT_MAX; // Return a special value for NULL input
    }

    unsigned int result = 0;

    while (*b != '\0') {
        if (*b == '0' || *b == '1') {
            result = (result << 1) + (*b - '0');
            b++;
        } else {
            // Return a special value for invalid characters in the string
            return UINT_MAX;
        }
    }

    return result;
}
