#include<stdio.h>
int main(){
    // for(int i=0;i<26;i++){
    //     printf("%d->%c\n",i,i+97);
    // }

    // char ch = getchar();
    // printf("%d",ch-97);

    char ch;
    int fq[26] = {0};

    while(scanf("%c",&ch)!=EOF){
        int index = ch - 97;
        fq[index]+=1;        
    }

    for(int i=0;i<26;i++){
        if(fq[i]>0){
            printf("%c : %d\n",i+97,fq[i]);
        }
    }

              
    return 0;
}
