#include<bits/stdc++.h>
using namespace std;
class shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id=a;
            price=b;
        }
        void getData(void){
            cout<<"Code of item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }  
};

int main(){
    shop *ptr=new shop[3];
    /*
    general item
    veggies item
    hardware item
    */
   int p; float q;
   shop *tempptr=ptr;
   for(int i=0;i<3;i++){
    cout<<"Enter Id and Price of item "<<i+1<<endl;
    cin>>p>>q;
    ptr->setData(p,q);
    ptr++;
   }
   for(int i=0;i<3;i++){
    cout<<"Item number: "<<i+1<<endl;
    tempptr->getData();
    tempptr++;
   }

    return 0;
}

/*
    basics of pointer

    #include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
        int rel,com;
        void setData(int x, int y){
            rel=x;
            com=y;
        }
        void getData(void){
            cout<<"The real part is "<<rel<<endl;
            cout<<"The complex part is "<<com<<endl;
        }
    
};

int main(){
    Complex *ptr=new Complex;
    //(*prt).setData(1,54);
    ptr->setData(1,54);
    ptr->getData();

    // //Baisc example
    // int a=4;
    // int* ptr=&a;
    // cout<<"The value of a is "<<*(ptr)<<endl;
    // //new operator
    // float *p=new float(56.45);
    // cout<<"The value at address p is "<<*(p)<<endl;
    // int *arr = new int [3];
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // //delete []arr; // delete or free dynamical allocated memory
    // cout<<"The value of arr[0] is "<<arr[0]<<endl;
    // cout<<"The value of arr[1] is "<<arr[1]<<endl;
    // cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}

*/