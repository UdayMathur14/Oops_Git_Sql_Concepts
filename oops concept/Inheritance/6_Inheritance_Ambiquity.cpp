// two class have same function name and the third class is inherit both the class and when you call the function it gets confuse because both classes name has the same name , hence it is called inheritance ambiquity .


// to solve this problem we use scoped resolution 
    


#include<iostream>
using namespace std ; 
class Alpha {
    public:
    void funcAplha(){
        cout<<"alpha baby"<<endl;
    }
};
class Beta{
    public:
    void funcAplha(){
        cout<<"alpha beta"<<endl;
    }
};

class common : public Alpha , public Beta{
    public:
    //if i write the same function in common then it overwritten both the functions
     void funcAplha(){
        cout<<"alpha sex"<<endl;
    }
    
};

int main(){

    //problem occurs when this is called 
//   common obj;
//   obj.funcAplha();


// to solve this problem we use scoped resolution 
  common obj;
  obj.Alpha::funcAplha();

//class name then function name of the class , this helps to solve the ambiquity problem 
   obj.Beta::funcAplha();


   //if you write the same function in his class
   obj.funcAplha();



    
    return 0 ; 
}