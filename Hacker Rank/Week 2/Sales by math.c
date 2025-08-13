#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int socks[100]; 
    int count[101] = {0}; 
    int pairs = 0;

    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &socks[i]);
    }

    
    for (int i = 0; i < n; i++) {
        count[socks[i]] = count[socks[i]] + 1;
    }

    
    for (int color = 1; color <= 100; color++) {
        if (count[color] >= 2) {
            pairs = pairs + (count[color] / 2);
        }
    }

    printf("%d\n", pairs);
    
    return 0;
    
}    