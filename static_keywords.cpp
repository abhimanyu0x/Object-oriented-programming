#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    static int count;//static variable share space of every object and it is associated with class, so called class variable, scope is within class and terminate after program end
    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is  employee number "<<count<<endl;
    }
    static void getCount(void){
        //cout<<id; throw an error
        cout<<"The value of count is "<<count<<endl;//static function, can assess only another static function or variable
    }
};
int Employee::count;//defalut value is 0
//int Employee::count=100;/*syntax when we want to start count with some initial value*/
int main(){
    Employee abhi,ayush,shilpi;
    abhi.setData();
    abhi.getData();
    Employee::getCount();
    ayush.setData();
    ayush.getData();
    Employee::getCount();
    shilpi.setData();
    shilpi.getData();
    Employee::getCount();
    return 0;
}