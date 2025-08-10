#include <stdio.h>

int squares(int s[], int n, int d, int m) {
    int count = 0;

    
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;

        
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }

        
        if (sum == d) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);  

    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]); 
    }

    int d, m;
    scanf("%d %d", &d, &m);  

    int result = squares(s, n, d, m);
    printf("%d\n", result);

    return 0;
}