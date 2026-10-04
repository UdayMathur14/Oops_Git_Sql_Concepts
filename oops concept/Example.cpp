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

// p = c;

// Ye bol raha hai:

// "c object ke andar jo values hain, woh p object mein copy kar do."

// Iske baad:

// p                    c
// ├── a = 23            ├── a = 23
// └── s = "hi mathur"   └── s = "hi mathur"
    // Dono alag objects hain.
    // Bas c ki values p mein copy hui hain.
    // cout<<p.s;


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


Pen p;
Yahan p directly object hai.
p
↓
[ Pen object ]

Access:

p.a
p.s
p.write()

Example:
Pen p;
p.a = 10;
cout << p.a;

Memory

Ye automatic/local storage mein banta hai (agar local variable hai), aur scope khatam hone par automatically destroy ho jata hai.

Haan bhai, normal object Pen p; ka address chahiye toh & lagayega:
Pen p;
cout << &p;
Output kuch aisa:
0x61ff08

Pen p;
Pen* q = new Pen;
cout << &p;  // p object ka address
cout << q;   // q ke andar stored address

Pen p;

Pen* ptr = &p;

cout << &p << endl;     // p ka address
cout << ptr << endl;    // same address
cout << &ptr << endl;   // ptr pointer ka khud ka address