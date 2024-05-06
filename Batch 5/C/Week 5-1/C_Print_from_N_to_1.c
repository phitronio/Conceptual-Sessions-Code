#include<stdio.h>

void solve(int n){
    if(n==0) return;
    if(n==1)
        printf("%d",n);
    else
        printf("%d ",n);
    solve(n-1);
}


int main(){
    int n;
    scanf("%d",&n);    
    solve(n);
            
              
    return 0;
}
