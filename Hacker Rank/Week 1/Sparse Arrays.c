#include<stdio.h>
#include<string.h>
#define MAX 1000

int main(){
    int n,q;
    char strings[MAX][100];
    char queries[MAX][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",strings[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%s",queries[i]);
    }
    
    for(int i=0;i<q;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(strcmp(queries[i], strings[j]) == 0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}