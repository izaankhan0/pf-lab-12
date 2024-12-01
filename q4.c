#include <stdio.h>
#include <stdlib.h>

void main() {
    int testCases;
    printf("Enter the number of test cases: ");
    scanf("%d", &testCases);

    while (testCases--) {
        int size;
        printf("Enter the number of elements: ");
        scanf("%d", &size);

        int *array = (int *)malloc(size * sizeof(int));
        int frequency[10001] = {0};

        printf("Enter the elements: ");
        for (int i = 0; i < size; i++) {
            scanf("%d", &array[i]);
            frequency[array[i]]++;
        }

        int maxFrequency = 0, result = 10001;
        for (int i = 1; i <= 10000; i++) {
            if (frequency[i] > maxFrequency || (frequency[i] == maxFrequency && i < result)) {
                maxFrequency = frequency[i];
                result = i;
            }
        }

        printf("Most frequent number: %d\n", result);
        free(array);
    }
}
