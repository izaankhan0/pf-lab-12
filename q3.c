#include <stdio.h>
#include <stdlib.h>

void main() {
    int capacity = 4, count = 0;
    float *numbers = (float *)malloc(capacity * sizeof(float));

    int choice;
    do {
        printf("1. Add a number\n2. Display numbers\n3. Remove last number\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count == capacity) {
                capacity *= 2;
                numbers = (float *)realloc(numbers, capacity * sizeof(float));
            }
            printf("Enter a number: ");
            scanf("%f", &numbers[count++]);
        } else if (choice == 2) {
            printf("Numbers: ");
            for (int i = 0; i < count; i++) {
                printf("%.2f ", numbers[i]);
            }
            printf("\n");
        } else if (choice == 3 && count > 0) {
            count--;
        }
    } while (choice != 4);

    free(numbers);
}
