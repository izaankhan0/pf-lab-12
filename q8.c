#include <stdio.h>
#include <stdlib.h>

void main() {
    int points;
    printf("Enter the number of points: ");
    scanf("%d", &points);

    float *fees = (float *)malloc(points * sizeof(float));
    float totalProfit = 0.0;

    for (int i = 0; i < points; i++) {
        printf("Enter fee for point %d: ", i + 1);
        scanf("%f", &fees[i]);
        if (fees[i] < 0) {
            printf("Invalid fee. Setting to 0.\n");
            fees[i] = 0;
        }
        totalProfit += fees[i];
    }

    printf("Total profit: %.2f\n", totalProfit);
    free(fees);
}
