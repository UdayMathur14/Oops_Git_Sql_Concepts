// The inheritance in which a single derived class is inherited from a single base class is known as the Single Inheritance
#include<iostream>
using namespace std ; 

class Animal{
    public: 
        int age ; 
        int weight ; 

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
  
};
int main(){
    Dog labra ; 
    labra.speak();
    return 0 ; 
}