#include<stdio.h>
#include<stdlib.h>

int compare(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    
    int *arr = malloc(n * sizeof(int));
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);
    
    int minDiff = arr[k-1] - arr[0]; 
    for(int i = 1; i <= n - k; i++){
        int diff = arr[i + k - 1] - arr[i];
        if(diff < minDiff){
            minDiff = diff;
        }
    }
    
    printf("%d", minDiff);
    
    free(arr);
}