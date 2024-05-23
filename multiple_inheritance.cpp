#include<bits/stdc++.h>
using namespace std;

/*
Syntax for inheriting in multiple inheritance
 class derivedC: visibility-mode base1, visibility-mode base2{
    class body of class "derivedC"
 };
*/
class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int=a;
        }
};
class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int=a;
        }
};
class derived: public base1, public base2{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The  sum  of these value is "<<base1int+base2int<<endl;
        }
};
/*
The inherited derived class will look something like this:
data members:
    base1int-->protected
    base2int-->protected
Member function:
    set_base1int()-->public
    set_base2int()-->public
    set_show()-->public
*/
int main(){
    derived abhi;
    abhi.set_base1int(45);
    abhi.set_base2int(54);
    abhi.show();
    return 0;
}


/*
    Ambiquity resolution in multiple_inheritance when a function with the same name occurs in more than one base class. This issue can be resolved
    by using the class resolution operator with the function.

#include<bits/stdc++.h>
using namespace std;
class base1{
   public:
    void greet(){
        cout<<"How are you?"<<endl;
    } 
};
class base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }

};
class derived: public base1, public base2{
    int a;
    public:
    void greet(){
        base2::greet(); // calling the greet() of base2.
        base1::greet(); // calling the greet() of base1.
    }

};
int main(){
    //Ambibuity-1
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived d;
    d.greet();
    return 0;
}

*/