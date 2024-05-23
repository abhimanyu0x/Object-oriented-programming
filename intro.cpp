#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1, int b1, int c1);//Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }

};
void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee abhi;
    //abhi.a=4; --> This will throw error as a is private
    abhi.d=34;
    abhi.e=45;
    abhi.setData(1,2,4);
    abhi.getData();
    return 0;
}

/*
2.  example

#include<bits/stdc++.h>
using namespace std;

class binary{
    // by default data type is private in c++
    private:
    string s;
    void chk_bin(void);
    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary:: read(void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}

void binary:: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary:: ones_compliment(void){
    chk_bin();//Nesting of member function
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }else{
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    cout<<"Displaying your binary number "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}

*/


/*
3. example 
#include<bits/stdc++.h>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){
        counter=0;
    }
    void displayPrice(void);
    void setPrice(void);
};

void shop:: setPrice(void){
    cout<<"Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop a;
    a.initCounter();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.setPrice();
    a.displayPrice();
    return 0;
}
*/


/*
4. example

#include<bits/stdc++.h>
using namespace std;
class complexNumber{
    int a,b;
    public:
    void setData(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setDataBySum(complexNumber k1, complexNumber k2){
        a=k1.a+k2.a;
        b=k1.b+k2.b;
    }//we have passed object in function
    void printNumber(){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complexNumber c1,c2,c3;
    c1.setData(1,2);
    c1.printNumber();
    c2.setData(1,2);
    c2.printNumber();
    c3.setDataBySum(c1,c2);
    c3.printNumber();

    return 0;
}
*/

/*
5. example

#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    Employee abhi,ayush,shilpi;
    //abhi.setId();
    //abhi.getId();
    Employee fb[3];
    for(int i=0;i<3;i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}

*/


/*
6. example

#include<bits/stdc++.h>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    //BankDeposit(int p, int y, int r); // r can be a value like 14
    void displayVal(void){
        cout<<"The return value after "<<years<<" years is "<<returnValue<<endl;
    }

};
BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years =y;
    interestRate = r;
    returnValue = principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+r);
    }
}

// BankDeposit :: BankDeposit(int p, int y, int r){
//     principal = p;
//     years =y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for(int i=0;i<y;i++){
//         returnValue=returnValue*(1+interestRate);
//     }
// }

int main(){
    BankDeposit x(10,2,0.05);
    x.displayVal();
    return 0;
}
*/