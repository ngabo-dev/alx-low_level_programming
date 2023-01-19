#include <stdio.h>

int is_even(int num) {
    return (num % 2 == 0);
}

int int_index(int *array, int size, int (*cmp)(int)) {
    if (size <= 0) {
        return -1;
    }
    for (int i = 0; i < size; i++) {
        if (cmp(array[i]) != 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int index = int_index(array, size, is_even);
    if (index == -1) {
        printf("No even number found in the array.");
    } else {
        printf("The first even number in the array is at index: %d", index);
    }
    return 0;
}

