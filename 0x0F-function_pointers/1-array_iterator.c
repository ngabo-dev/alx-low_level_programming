#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int)) {
    for (size_t i = 0; i < size; i++) {
        action(array[i]);
    }
}

void print_int(int num) {
    printf("%d ", num);
}

void double_int(int *num) {
    *num = *num * 2;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    array_iterator(array, size, print_int);
    printf("\n");

    array_iterator(array, size, double_int);
    printf("Doubled array: ");
    array_iterator(array, size, print_int);
    printf("\n");

    return 0;
}

