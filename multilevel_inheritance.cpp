#include<bits/stdc++.h>
using namespace std;
class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(void){
    cout<<"The Roll Number is "<<roll_number<<endl;
}
class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void exam::set_marks(float m1, float m2){
    maths=m1;
    physics=m2;
}
void exam :: get_marks(void){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}
class result : public exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;
        };
};
int main(){
    /*
    Notes:
        if we are inheriting B from A and C from B:[A-->B-->C]
        1. A is the  base class from B and B is the base class for C
        2. A-->B-->C is called Inheritance path
    */
    result abhi;
    abhi.set_roll_number(43);
    abhi.set_marks(98.0,99.0);
    abhi.display();
    return 0;
}