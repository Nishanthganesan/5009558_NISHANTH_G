#include <stdio.h>

long sumxor(long n) {
    if (n == 0) return 1;
    
    int zeroBits = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            zeroBits++;
        }
        n >>= 1;
    }
    return 1L << zeroBits;
}

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n", sumxor(n));
    return 0;
}