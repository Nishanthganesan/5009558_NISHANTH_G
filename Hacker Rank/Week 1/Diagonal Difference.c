#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int sum1(int n,int mat[MAX][MAX]){
    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1 += mat[i][j];
            }
        }
    }
    return sum1;
}

int sum2(int n,int mat[][MAX]){
    int sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==n-1){
                sum2 += mat[i][j];
            }
        }
    }
    return sum2;
}


int main(){
    int n;
    scanf("%d",&n);
    int mat[MAX][MAX];
    
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    int difference = abs(sum1(n, mat) - sum2(n,mat));
    printf("%d",difference);
}
