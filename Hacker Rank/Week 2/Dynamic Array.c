#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int **seqList = (int **)malloc(n * sizeof(int *));
    int *seqSize = (int *)calloc(n, sizeof(int));
    int *seqCap = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        seqList[i] = (int *)malloc(1 * sizeof(int));
        seqCap[i] = 1;
    }

    int lastAnswer = 0;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            if (seqSize[idx] == seqCap[idx]) {
                seqCap[idx] *= 2;
                seqList[idx] = (int *)realloc(seqList[idx], seqCap[idx] * sizeof(int));
            }
            seqList[idx][seqSize[idx]++] = y;
        } else if (type == 2) {
            int pos = y % seqSize[idx];
            lastAnswer = seqList[idx][pos];
            printf("%d\n", lastAnswer);
        }
    }


    return 0;
}