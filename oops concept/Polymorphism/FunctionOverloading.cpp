// same class m agr 2 function likhan chahte ho same name se toh tumhe different parameter dene honge tb shi h 
#include<iostream>
using namespace std ; 

class A{
    public:
    void sayHello(){
        cout<<"Hello Uday Mathur"<<endl;
    }

    void sayHello(string name ){
        cout<<"Hello "<<name<<endl;
    }

    //agr tum soch rhe hoge ki void ki jagah string daal do toh chl jaye but phir bhi same problem hi hogi , parameters different hone chahye chahiye function kaisa bhi ho 

    // string sayHello(string name ){
    //     cout<<"Hello "<<name<<endl;
    //     return name ;
    // }

    // same problem 
    
    // maine error hide kr rakhe h isliye dikh nhi rha ki error h ki nhi but error show ho jayenge agr kisi aur compiler m daalega toh , tbhi bolte h isse ki compile time polymorphism because hme compile time p hi dikh jata h ki kya error h chalane ki need nhi hoti 
};



int main(){
    //same function dobara redeclare mt kro 
    // A obj;
    // obj.sayHello();

    // but give a paramater to one of the function will not get any error 
    A obj;
    obj.sayHello("sheety");

    return 0 ; 
}