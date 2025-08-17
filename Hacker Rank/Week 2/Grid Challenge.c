#include<stdio.h>
#include <stdlib.h>
#define MAX 1000
#include <string.h>

int compare(const void *a,const void *b){
    return (*(char*)a - *(char*)b);
}

void strcompare(char grid[][MAX],int n){
    int possible = 1;
    for(int i=0;i<n && possible;i++){
        for(int j=0;j<n-1;j++){
            if(grid[j][i]>grid[j+1][i]){
                possible =0;
                break;
            }
        }
    }
    if(possible){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}

int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
    char grid[MAX][MAX];
    for(int i=0;i<n;i++){
        scanf("%s",grid[i]);
        qsort(grid[i],strlen(grid[i]),sizeof(char),compare);
    }
    strcompare(grid,n);
    }
    
}