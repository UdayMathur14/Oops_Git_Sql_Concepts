//At multiple levels there is Inheritance . 
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

class GermanSheferd :public Dog{

};
int main(){
    GermanSheferd ger; 
    ger.speak();
    return 0 ; 
}