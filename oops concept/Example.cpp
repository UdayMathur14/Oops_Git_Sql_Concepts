#include<bits/stdc++.h>
#include<string.h>
using namespace std ;

class Pen{
//     public:
//    int a;
//     //string colour ; 
//     // string type ; 

//     // void write(){
//     //     cout<<"Write Some code baby";
//     // } 
// //     Pen(){
//         cout<<"whats up pen";
//     }

    public:
    int a = 23; 
    string s ; 
} ;

int main(){
    // //dunamic allocation 
    // Pen *p = new Pen;

    Pen p ; 
    p.s = "sheety";
    cout<<p.s;
    Pen c ; 
    c.s = "hi mathur";
    p = c; 

    cout<<p.s;


    //normal 
    // Pen p ; 
    // cout<<p.a;


   // p.a = 6;
    // p.colour = "Blue";
    // p.type = "Ball";

    // p.write();
    // cout<<endl;
    // cout<<p.type;
    // cout<<p.colour;
    //cout<<sizeof(p);
    //cout<<p->a; // for dynamic use


    
    return 0 ; 
}