#include<stdio.h>
#include<stdlib.h>

int main(){
    int T,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        int *arr = malloc(n * sizeof(int));
        long long sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        int left_sum =0;
        int found =0;
        for(int i=0;i<n;i++){
            long long right_sum = sum - left_sum - arr[i];
            if(left_sum == right_sum){
                printf("YES\n");
                found = 1;
                break;
            }
            left_sum+=arr[i];
        }
        if(!found){
            printf("NO\n");
        }
        free(arr);
    }
    return 0;
    
}