#include <stdio.h>

void countingSort(int arr[], int n, int frequency[]) {
    for (int i = 0; i < 100; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int frequency[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n, frequency);

    for (int i = 0; i < 100; i++) {
        printf("%d ", frequency[i]);
    }

    return 0;
}