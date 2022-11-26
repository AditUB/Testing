#include<iostream>
// #include<string.h>

using namespace std;


// class find {
// public:
//    void print()  { cout <<" In find"; }
// };
  
// class course : public find {
// public:
//    void print() { cout <<" In course"; }
// };
  
// class tech: public course { };
  
// int main(void)
// {
//   tech t; 
//   t.print();
//   return 0;
// }

//    class Base1 {
//  public:
//      ~Base1()  { cout << " Base1" << endl; }
// };
   
// class Base2 {
//  public:
//      ~Base2()  { cout << " Base2" << endl; }
// };
   
// class Derived: public Base1, public Base2 {
//    public:
//      ~Derived()  { cout << " Derived" << endl; }
// };
   
// int main()
// {
//    Derived d;
//    return 0;
// } 

//21.1  Multilevel inheritence
// class A{
//     public:
//     void printA()
//     {
//         cout<<"Funtion A"<<endl;
//     }
        
// };

// class B: public A{
//     public:
//     void printB()
//     {
//         cout<<"Funtion B"<<endl;
//     }
// };

// class C: public B{
//     public:
//     void printC()
//     {
//         cout<<"Funtion C"<<endl;
//     }
// };

// int main(){

//     C obj;
//     obj.printA();
//     obj.printB();
//     obj.printC();
//     return 0;

// }


//21.2  hierarchical inheritance
// class in{
//     public:
//         double n;
//         void get(){
//              cout<<"Enter num"<<endl;
//              cin>>n;
//         }
        
// };

// class Square : public in{
//     public:
//         void printsq(){
//             cout<<"Square="<<n*n<<endl;

//         }            
        
// };

// class Cube : public in{
//     public:
//         void printcu(){
//             //double nnn=returnN();
//             cout<<"Cube="<<n*n*n<<endl;
//         }
// };

// int main(){
//     Square obj1;
//     obj1.get();
//     obj1.printsq();

//     Cube obj2;
//     obj2.get();
//     obj2.printcu();
// }

//21.3 multiple inheritance
class Getinfo1{
    public:
    string name,id;

    void getinfoo1(){
        cout<<"Enter"<<endl;
        getline(cin,name);
        getline(cin,id);
    }
};
class Getinfo2{
    public:
    string dept,sec;
    
    void getinfoo2(){
        cout<<"Enter1"<<endl;
        getline(cin,dept);
        getline(cin,sec);
    }
};
class Printinfo:public Getinfo1,public Getinfo2{
    public:
    void getinfo(){
        getinfoo1();
        getinfoo2();
    }
    void print(){
         cout<<name<<dept<<endl;
    }
   
};

int main(){
    Printinfo obj;
    obj.getinfo();
    obj.print();
    return 0;
}