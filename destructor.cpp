#include<bits/stdc++.h>
using namespace std;
int c = 0;
class num{
    public:
    num(){
        c++;
        cout<<"This is the  time when constructor is called "<<c<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called "<<c<<endl;
        c--;
    }
};

int main(){
    cout<<"we are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;{
        cout<<"entering this block "<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block "<<endl;
    }
    cout<<"Back to main "<<endl;
    return 0;
}