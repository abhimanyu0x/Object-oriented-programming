/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i), b(j){constructor-body}
};
*/
#include<bits/stdc++.h>
using namespace std;
class Test{
    int a;
    int b;
    public:
        //Test(int i,int j) : a(i), b(j)
        //Test(int i,int j) : a(i), b(i+j);
        //Test(int i,int j) : a(i), b(2*j);
        //Test(int i,int j) : a(i), b(a+j);
        Test(int i,int j) : b(j), a(i+b)
        /*
        Red flag this will create problems because a will be initialized first
        */
        {
            cout<<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value  of b is "<<b<<endl;
        }
};

int main(){
    return 0;
}



/*
    1.  Example of special syntax for passing arguments to multiple base classes.
    2.  The constructor of the derived class recives all the arguments at once and then will pass the call to the respective base classes.
    3.  The body is called after all  the  constructors are finished executing.

#include<bits/stdc++.h>
using namespace std;
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is"<<data1<<endl;
        }
};
class base2{
    int data2;
    public:
        base2(int i){
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is"<<data2<<endl;
        }
};

class derived:public base1, public base2{
    int derived1,derived2;
    public:
        derived(int a, int b, int c, int d):base1(a),base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is"<<derived1<<endl;
            cout<<"The value of derived2 is"<<derived2<<endl;
        }        
};
int main(){
    derived abhi(1,2,3,4);
    abhi.printDataBase1();
    abhi.printDataBase2();
    abhi.printDataDerived();
    return 0;
}
*/