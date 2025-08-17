#include <stdio.h>
#include <string.h>
#include <ctype.h>

void alphabet(char s[], int k) {
    k = k % 26; 

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (isalpha(ch)) { 
            char base = isupper(ch) ? 'A' : 'a';
            ch = ((ch - base + k) % 26) + base;
        }

        s[i] = ch; 
    }
}

int main() {
    int n, k;
    char s[1000];

    scanf("%d", &n);   
    scanf("%s", s);    
    scanf("%d", &k);   

    alphabet(s, k);

    printf("%s\n", s);

    return 0;
}