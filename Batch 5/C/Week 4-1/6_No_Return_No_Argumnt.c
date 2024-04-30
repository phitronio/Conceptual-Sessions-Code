/**
Write a C program to take one positive integer N as input and print all even numbers 
from 2 to N.
Implement it using function.


Sample Input 1:
10
Sample Output 1:
2 4 6 8 10

Sample Input 2: 
7
Sample Output 2:
2 4 6 
*/

#include<stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}

#include<stdio.h>
int main(){
    solve();       
              
    return 0;
}
