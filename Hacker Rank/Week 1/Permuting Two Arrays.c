#include <stdio.h>

void sortAscending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int testCases;
    scanf("%d", &testCases); // how many test cases

    while (testCases--) {    // repeat for each test
        int n, k;
        scanf("%d %d", &n, &k);

        int A[n], B[n];
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        for (int i = 0; i < n; i++) scanf("%d", &B[i]);

        sortAscending(A, n);
        sortDescending(B, n);

        int ok = 1;
        for (int i = 0; i < n; i++) {
            if (A[i] + B[i] < k) {
                ok = 0;
                break;
            }
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
            