/**
You are given an integer n or –n .If you are given n , print n to –n ,
if you are given –n, print –n to n.

See the sample output for more clarification. Implement it using function.

Sample Input :
5
Sample Output :
5 4 3 2 1 0 -1 -2 -3 -4 -5

Sample Input :
-4
Sample Output :
-4 -3 -2 -1 0 1 2 3 4


*/

#include<stdio.h>

void printSequence(int num){
    if(num>=0){
        for(int i=num;i>=-num;i--){
            printf("%d ",i);
        }

    }else{
        for(int i=num;i<=-num;i++){
            printf("%d ",i);
        }

    }

}

int main(){
    int n;
    scanf("%d",&n);
    printSequence(n);             
    return 0;
}

