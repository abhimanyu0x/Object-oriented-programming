/*
derived class syntax

class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}{
    class members/methods/etc...
}
NOTE:
1. default visibility mode is private
2. public visibility mode: public member of the base class becomes public member of the derived class
3. private visibility mode: public member of the base class becomes private memebrs of the derived classs 
4. private members are never inherited 


    very imp table
                    public derivation   private derivation  protected derivation
    1. private      Not Inherited       Not Inherited       Not Inherited
    2. protected    Protected           private             Protected
    3. public       public              private             protected

*/

#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee (){}
};
// creating a programmer class derived from employee base class
class programmer:public Employee{
    public:
    int languageCode;
    programmer(int inpuId){
        id=inpuId;
        languageCode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    Employee abhi(1),ashu(2);
    cout<<abhi.salary<<endl;
    cout<<ashu.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();

    return 0;
}


/*
2.  example

#include<bits/stdc++.h>
using namespace std;

class base{
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base::setData(void){
    data1=10;
    data2=20;
}
int base::getData1(){
    return data1;
}
int base::getData2(){
    return data2;
}
class derived : public base{
    int data3;
    public:
    void process();
    void display();
};
void derived::process(){
    data3=data2*getData1();
}
void derived::display(){
cout<<"Value of data 1 is "<<getData1()<<endl;
cout<<"Value of data 2 is "<<data2<<endl;
cout<<"Value of data 3 is "<<data3<<endl;
}
int main(){
    derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}

3.  example 

#include<bits/stdc++.h>
using namespace std;

class base{
    int data1;
    public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base::setData(void){
    data1=10;
    data2=20;
}
int base::getData1(){
    return data1;
}
int base::getData2(){
    return data2;
}
class derived : private base{
    // derived privately
    int data3;
    public:
    void process();
    void display();
};
void derived::process(){
    der.setData();
    data3=data2*getData1();
}
void derived::display(){
cout<<"Value of data 1 is "<<getData1()<<endl;
cout<<"Value of data 2 is "<<data2<<endl;
cout<<"Value of data 3 is "<<data3<<endl;
}
int main(){
    derived der;
    der.process();
    der.display();
    return 0;
}

*/