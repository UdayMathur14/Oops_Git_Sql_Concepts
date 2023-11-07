// In which a class is inherit more than one class.
#include<iostream>
using namespace std ; 

class Animal{
    public: 
        int age ; 
        int weight ; 

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class Human  {
    public:
    string colour;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

// multiplile inheritance

class hybrid : public Human , public Animal{

};
int main(){
    hybrid obj;
    obj.speak();
    obj.bark();
    return 0 ; 
}