#include<stdio.h>
int main(){
    int sz;
    scanf("%d",&sz);

    int inp[sz];

    for(int i=0;i<sz;i++){
        scanf("%d",&inp[i]);
    }

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
        fq[index] +=1;
    }

    int duplicate = 0;
    int unq = 0;
    for(int i=largest;i>=0;i--){
        if(fq[i]>1){
            duplicate++;
        }
        if(fq[i]==1){
            unq++;
        }

    }
    printf("duplicated = %d\n",duplicate);
    printf("Unique = %d",unq);
            
              
    return 0;
}
