#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    unsigned int m;
    while(n--){
        scanf("%u",&m);
        printf("%u\n",~m);
    }
    return 0;
}