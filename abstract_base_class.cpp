#include<bits/stdc++.h>
using namespace std;
class cwh{
    // abstract base class
    /*
    at least one pure virtual function
    write for inherit object
    */
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){
            title=s;
            rating = r;
        }
        virtual void  display()=0; // do-nothing function --> pure virtual function
};
class cwhVideo : public cwh{
    float videoLength;
    public:
        cwhVideo(string s, float r, float vl):cwh(s,r){
            videoLength=vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 starts"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes "<<endl;
        }
};
class cwhText : public cwh{
    int words;
    public:
        cwhText(string s, float r, int wc):cwh(s,r){
            words=wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Rating of this text tutorial: "<<rating<<" out of 5 starts"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<"words"<<endl;
        }
};

int main(){
    string title;
    float rating , vlen;
    int word;
    // for code with video
    title="Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhVideo djVideo(title,rating,vlen);
    //djVideo.display();
    // for code with Text
    title="Django tutorial";
    word = 433;
    rating = 4.19;
    cwhText djText(title,rating,word);
    //djText.display();

    cwh*tuts[2];
    tuts[0]=&djVideo;
    tuts[1]=&djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}