#include<bits/stdc++.h>
using namespace std;
// forward declaration 
 class complexNumber;

class calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumrealComplex(complexNumber x1,complexNumber x2);
    int sumcomComplex(complexNumber x1,complexNumber x2);
};

class complexNumber{
    int a,b;
    // individually declaring function as friends
    friend int calculator::sumrealComplex(complexNumber x1,complexNumber x2);
    friend int calculator::sumcomComplex(complexNumber x1,complexNumber x2);

    // aliter: Declaring the entire calculator class as friend
    //friend class calculator;

    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculator ::sumrealComplex(complexNumber x1,complexNumber x2){
        return (x1.a+x2.a);   
    }
int calculator ::sumcomComplex(complexNumber x1,complexNumber x2){
        return (x1.b+x2.b);   
    }

int main(){
    complexNumber o1,o2;
    o1.setData(2,6);
    o2.setData(5,8);
    calculator cal;
    int ans1=cal.sumrealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<ans1<<endl;
    int ans2=cal.sumrealComplex(o1,o2);
    cout<<"The sum of complex part of o1 and o2 is "<<ans2<<endl;
    return 0;
}

// Example 

/*
#include<bits/stdc++.h>
using namespace std;
// forward declaration
class Y;
class X{
    int data;
    friend void add(X,Y);
    public:
    void setValue(int value){
        data=value;
    }
};
class Y{
    int num;
    friend void add(X,Y);
    public:
    void setValue(int value){
        num=value;
    }
};
void add(X o1, Y o2){
    cout<<"Summing dates of X and Y objects gives me "<<o1.data +o2.num<<endl;
}
int main(){
    X a;
    Y b;
    a.setValue(5);
    b.setValue(6);
    add(a,b);
    return 0;
}
*/