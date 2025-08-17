#include<stdio.h>

int play(int n,int m){
    if(m==1 || n%2 == 0){
        return 2;
    }
    return 1;
}
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%d",&m);
        printf("%d\n",play(n,m));
    }
    
}