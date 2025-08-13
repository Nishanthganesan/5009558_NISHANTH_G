#include <stdio.h>


int pageCount(int totalPages, int targetPage) {
    
    int turnsFromFront = targetPage / 2;

    int turnsFromBack = (totalPages / 2) - (targetPage / 2);

    
    if (turnsFromFront < turnsFromBack) {
        return turnsFromFront;
    } else {
        return turnsFromBack;
    }
}

int main() {
    int n, p;

    
    scanf("%d", &n);


    scanf("%d", &p);

    
    int result = pageCount(n, p);

    
    printf("%d\n", result);

    return 0;
}