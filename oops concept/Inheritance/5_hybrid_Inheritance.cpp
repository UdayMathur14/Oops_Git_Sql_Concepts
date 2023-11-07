// hybrid =Combination of more than 1 type of inheritance 
// eg = hierarichal +multiple inhertance


#include<iostream>
using namespace std ; 
class Alpha {
    public:
    void funcAplha(){
        cout<<"alpha baby"<<endl;
    }
};
class A{
    public:
    void func1(){
        cout<<"I am function A"<<endl;
    }
};

class B : public A{
    public:
     void func2(){
        cout<<"I am function B"<<endl;
    }
    
};

// in this A,B,C are hieracahical inheritance and c has multiple inheritance in it .
class C : public A , public Alpha{
    public:
     void func3(){
        cout<<"I am function C"<<endl;
    }
};
int main(){
    C obj1; 
    obj1.func1();
    obj1.funcAplha();
    obj1.func3();
    

    
    return 0 ; 
}