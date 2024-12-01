#include <stdio.h>
#include <stdlib.h>

void main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *numbers = (int *)malloc(size * sizeof(int));
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Largest number: %d\n", largest);
    free(numbers);
}
