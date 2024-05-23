#include<bits/stdc++.h>
using namespace std;
class complexNumber{
    int a,b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    // below line means that non member - sumcomplex function is allowed to do anything with my private parts
    friend complexNumber sumComplex(complexNumber x1, complexNumber x2);
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complexNumber sumComplex(complexNumber x1,complexNumber x2){
    complexNumber c3;
    c3.setData((x1.a+x2.a),(x1.b+x2.b));
}

int main(){
    complexNumber c1,c2,c3;
    c1.setData(1,2);
    c1.printNumber();
    c2.setData(5,8);
    c2.printNumber();
    c3=sumComplex(c1,c2);
    c3.printNumber();

    return 0;
}
/* properties of friend function

1. not in the scope of the class
2  since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex()==invalid
3. can be invoked without the help of any object
4. usually contans the object as arguments
5. can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/