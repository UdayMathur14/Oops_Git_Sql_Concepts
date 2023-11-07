#include<iostream>
using namespace std ; 

class Human{
    public:
        int height ; 
        int weight ; 
        int age ; 

    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight = w;
    }
};

class Male : protected Human{
    public:
    string colour;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }  
};
int main(){

   Male uday;
   cout<<uday.age;
    cout<<endl;
    uday.sleep();
    return 0 ; 
}