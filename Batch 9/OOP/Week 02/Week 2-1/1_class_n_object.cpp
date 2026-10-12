#include<bits/stdc++.h>
using namespace std;
                 
class Phone{
    public:
    Phone(){
        cout<<"I am constructor\n";
    }

    void display(){
        cout<<"I am method"<<endl;
    }

    ~Phone(){
        cout<<"I am destructor";
    }


};


int main(){
    Phone s;
    s.display();
            
              
    return 0;
}
