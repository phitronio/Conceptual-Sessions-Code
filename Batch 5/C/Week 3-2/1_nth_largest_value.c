#include<stdio.h>
int main(){
    int sz;
    scanf("%d",&sz);

    int inp[sz];

    for(int i=0;i<sz;i++){
        scanf("%d",&inp[i]);
    }

    int n;
    scanf("%d",&n);

    int largest = inp[0];

    for(int i=0;i<sz;i++){
        if(inp[i]>largest){
            largest = inp[i];
        }
    }

    // printf("%d",largest);

    int fq[largest+1];

    for(int i=0;i<=largest;i++){
        fq[i] = 0;
    }

    for(int i=0;i<sz;i++){
        int index = inp[i];
        fq[index] = 1;
    }

    int cnt = 0;
    for(int i=largest;i>=0;i--){
        if(fq[i]==1){
            cnt++;
        }
        if(cnt==n){
            printf("%d",i);
            break;
        }
    }
            
              
    return 0;
}
