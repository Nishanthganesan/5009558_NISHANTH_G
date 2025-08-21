#include<stdio.h>
#include <stdbool.h>

bool powerTwo(unsigned long long n){
    return (n && !(n& (n-1)));
}

unsigned long long highestpower(unsigned long long n){
    int pos = 63 - __builtin_clzll(n);  
    return 1ULL << pos;
}

void game(unsigned long long n){
    int turn = 0;
    
    while(n>1){
        if(powerTwo(n)){
            n/=2;
        }else{
            n-=highestpower(n);
        }
        turn++;
    }
    if(turn%2 == 0){
        printf("Richard\n");
    }else{
        printf("Louise\n");
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long n;
        scanf("%llu",&n);
        game(n);
    }
    return 0;
}