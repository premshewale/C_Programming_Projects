#include <stdio.h>

int main() {
    int arr[5] = {11, 71, 2, 44, 1};
    int i, j, minIndex, temp;

    // Selection sort algorithm
    for (i = 0; i < 4; i++) {
        minIndex = i;
        for (j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Print sorted array
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
