#include <stdio.h>
int main() {
    int n, capacity;
    printf("Enter number of items and capacity: ");
    scanf("%d %d", &n, &capacity);
    int weights[n], values[n];
    float ratios[n];
    int i,j;
    for ( i = 0; i < n; i++) {
        printf("Enter weight and value of item %d: ", i + 1);
        scanf("%d %d", &weights[i], &values[i]);
        ratios[i] = (float)values[i] / weights[i];
    }
    for ( i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratios[i] < ratios[j]) {
                int temp = weights[i];
                weights[i] = weights[j];
                weights[j] = temp;
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
                float tempRatio = ratios[i];
                ratios[i] = ratios[j];
                ratios[j] = tempRatio;
            }
        }
    }
    int weight = 0;
    float totalValue = 0;
    printf("Selected items:\n");
    for (i = 0; i < n; i++) {
        if (weight + weights[i] <= capacity) {
            weight += weights[i];
            totalValue += values[i];
            printf("Item %d: Weight = %d, Value = %d\n", i + 1, weights[i], values[i]);
        } else {
            float partialValue = (values[i] / (float)weights[i]) * (capacity - weight);
            totalValue += partialValue;
            printf("Item %d: Weight = %d, Value = %.2f (partial)\n", i + 1, capacity - weight, partialValue);
            break;
        }
    }
    printf("\nTotal Value: %.2f\n", totalValue);
    return 0;
}
