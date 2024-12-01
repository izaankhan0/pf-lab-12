#include <stdio.h>
#include <stdlib.h>

void main() {
    int size, position, value, choice;
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    do {
        printf("1. Insert\n2. Delete\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter position and value to insert: ");
            scanf("%d %d", &position, &value);

            size++;
            array = (int *)realloc(array, size * sizeof(int));
            for (int i = size - 1; i > position; i--) {
                array[i] = array[i - 1];
            }
            array[position] = value;

        } else if (choice == 2) {
            printf("Enter position to delete: ");
            scanf("%d", &position);

            for (int i = position; i < size - 1; i++) {
                array[i] = array[i + 1];
            }
            size--;
        }
    } while (choice != 3);

    free(array);
}
