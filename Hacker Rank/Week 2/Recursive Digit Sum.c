#include <stdio.h>
#include <string.h>


long long sumOfDigits(char n[]) {
    long long sum = 0;
    for (int i = 0; i < strlen(n); i++) {
        sum = sum + (n[i] - '0');  
    }
    return sum;
}


long long superDigit(long long num) {
    while (num >= 10) {   
        long long temp = 0;
        while (num > 0) {
            temp = temp + (num % 10); 
            num = num / 10;
        }
        num = temp;  
    }
    return num;  
}

int main() {
    char n[100005];  
    int k;
    scanf("%s %d", n, &k);

    
    long long initialSum = sumOfDigits(n);

    
    long long total = initialSum * k;

    
    long long result = superDigit(total);

    printf("%lld\n", result);

    return 0;
}