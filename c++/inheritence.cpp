#include<iostream>
using namespace std;

class Studentin{
    public:
        void input(){
            string name;
            cin>>name;
        }
};

class Studentout : public Studentin {
     public:
        void output(){
            cout<<name<<endl;
        }
};