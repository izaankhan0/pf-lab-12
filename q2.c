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
        if (numbers[i] % 2 != 0) {
            numbers[i]--;
        }
    }

    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
}
