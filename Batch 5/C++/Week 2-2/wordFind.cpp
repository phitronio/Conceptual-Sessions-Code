/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/
#include<bits/stdc++.h>
using namespace std;
                    
int main(){
    string str = "Programming Hero ";

    int cnt = 0;
    while(str.find("Phitron")!=-1){
        str.replace(str.find("Phitron"),7," ");
        cnt++;
    }
    cout<<cnt<<endl;
              
    return 0;
}
