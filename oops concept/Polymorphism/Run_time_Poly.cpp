// rule for runtime poly :
// 1 - function name must be same 
// 2 - function parameter must be same 
// 3 - inheritance honi chahiye 


#include<bits/stdc++.h>
using namespace std ; 

class Animal{
    public :
    void sound(){
        cout<<"barking";
    }
};
class Human : public Animal {
    public :
    void sound(){
        cout<<"speaking";
    }
};


int main(){

    Human d ; 
    d.sound();

    // inherit toh kr rha tha animal ko toh barking aana cahaiye tha but aapne uska same function apni hi class m likh ke function ko override kr diya , isko bolte h function overring 

    //advantage kya h iska 
    // suppose kr ki ek class h uske ander 10 methods h jo hmne inherit kr liye h but hme usme se ek method ko thoda change krna h toh jiss class ne usko inherit kra h ussi ke ander smae function likh denge and change kr denge , toh isko bolte h polymorphism 

    return 0 ; 
}