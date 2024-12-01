#include <stdio.h>
#include <stdlib.h>

void main() {
    int studentCount;
    printf("Enter the number of students: ");
    scanf("%d", &studentCount);

    int **grades = (int **)malloc(studentCount * sizeof(int *));
    int *gradeCounts = (int *)malloc(studentCount * sizeof(int));

    for (int i = 0; i < studentCount; i++) {
        printf("Enter the number of grades for student %d: ", i + 1);
        scanf("%d", &gradeCounts[i]);
        grades[i] = (int *)malloc(gradeCounts[i] * sizeof(int));

        printf("Enter grades for student %d: ", i + 1);
        for (int j = 0; j < gradeCounts[i]; j++) {
            scanf("%d", &grades[i][j]);
        }
    }

    printf("\nGrades entered:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < gradeCounts[i]; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < studentCount; i++) {
        free(grades[i]);
    }
    free(grades);
    free(gradeCounts);
}
