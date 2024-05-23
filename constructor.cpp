    /*
    1. creating a constructor
    2. constructor is a special member function with the same name as of the class.
    3. it is used to initialize the object of its class
    4. it is automatically invoked whenever an object is created
    5. It should be declared in the public section of the class
    6. They are automatically invoked whenever the object is created
    7. They cannot return values and donot have return types
    8. It cannot have default arguments
    9. We cannot refer to their address
    */
#include <bits/stdc++.h>
using namespace std;
class complexNum{
    int a;
    int b;
    public:
    //complexNum(void);//constructor declaration
    complexNum(int,int);// constructor declaration

    void printNum(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
/*
complexNum::complexNum(void){
    // -------> This is a deafault contructor as it takes no parameters
    a=0;
    b=0;
}
*/
complexNum::complexNum(int x,int y){
    // -------> This is a parameterized contructor as it takes no parameters
    a=x;
    b=y;
}
int main(){
    //implicit call
    complexNum a(4,6);
    a.printNum();
    //explicit call
    complexNum b=complexNum(6,4);
    b.printNum();
    return 0;
}



/*
2.  Example code

#include<bits/stdc++.h>
using namespace std;
class point{
    int x,y;
    public:
    point (int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }
};
int main(){
    point s(1,1);
    point p(4,5);
    s.displayPoint();
    p.displayPoint();

    return 0;
}
*/


/*
3.  This is the case of constructor overloading where we make more than one constructor
    and arguments which match with it will run

#include<bits/stdc++.h>
using namespace std;
class complexNum{
    int x,y;
    public:
    complexNum(){
        x=0;
        y=0;
    }
    complexNum(int a){
        x=a;
        y=0;
    }
    complexNum (int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
    }
};
int main(){
    complexNum s(1,1);
    complexNum p(4);
    complexNum q;
    s.displayPoint();
    p.displayPoint();
    q.displayPoint();
    return 0;
}

*/

/*
4.  constructors with defalut arguments

#include<bits/stdc++.h>
using namespace std;
class simple{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a,int b=9,int c=19){
        data1=a;
        data2=b;
        data3=c;
    }
    void printData(){
        cout<<"The value of data1, data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;
    }
};
int main(){
    simple a(1);
    a.printData(); //output --> The value of data1, data2 and data3 is 1 , 9 and 19
    simple b(1,4);
    b.printData();//output --> The value of data1, data2 and data3 is 1 , 4 and 19
    simple c(8,7,9);
    c.printData(); //output --> The value of data1, data2 and data3 is 8 , 7 and 9
    return 0;
}
*/

/*
5.  copy constructor ---> When no copy constructor is found, compiler supplies its own copy constructor

#include<bits/stdc++.h>
using namespace std;
class number{
    int a;
    public:
    number (){}
    number(int x){
        a=x;
    }
    number(number &obj){
        cout<<"Copy constructor called"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    number z1(z); // copy constructor invoked
    z1.display();
    z2=z; // copy constructor not called
    number z3=z; // copy constructor invoked
    z3.display();
    return 0;
}
*/