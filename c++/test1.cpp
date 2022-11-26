#include<iostream>
using namespace std;


//Adhvith U B
//1RN21CS012

//Test 1- Q18 programs

void Q1(){
    
    double a=0.0,b=0.0;
    char c=' ';
    cout<<"Enter number operation number"<<endl;
    cin>>a>>c>>b;
    switch(c)
    {
        case '+':
            cout<<"Sum="<<a+b<<endl;
        break;
        case '-':
            cout<<"Difference="<<a-b<<endl;
        break;
        case '*':
            cout<<"Product="<<a*b<<endl;
        break;
        case '/':
            if(b!=0)
                cout<<"Quotient="<<a/b<<endl;
            else    
                cout<<"Divide by 0 error"<<endl;
        break;
        default:
            cout<<"Invalid operation";
    }
}

void Q2(){
    int myNum = 9;
	float myDoubleNum = 8.99;
	char myLetter ='A';
	bool myBool = false;
	string myText = "Hello World";
    cout<<myNum<<endl<<myDoubleNum<<endl<<myLetter<<endl<<myBool<<endl<<myText<<endl;
}

void Q3(){
    int a=0;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a%2==0)
        cout<<"Even"<<endl;
    else    
        cout<<"Odd"<<endl;
}

void Q4(){
    string a="";
    getline(cin,a);
    cout<<"Length of string is "<<a.length()<<endl;

    string b="", c="";
    getline(cin, b);
    getline(cin, c);
    if(b.compare(c)==0)
        cout<<"Strings are same"<<endl;
    else
    cout<<"Strings are not same"<<endl;
}


int factorial(int a)
{
    if(a==0)
      return 1;
    else 
     return a*factorial(a-1);
}
void Q5(){
    int a=0;
    cin>>a;
    cout<<(factorial(a))<<endl; 
}

void multiply(double x, double y)
{
    cout<<"Real multiplication"<<x*y<<endl;
}
void multiply(int x, int y)
{
    cout<<"Integer multiplication"<<x*y<<endl;
}

void Q6(){
    int a=0,b=0;
    double c=0.0,d=0.0;
    cin>>a>>b>>c>>d;
    multiply(a,b);
    multiply(c,d);
}

int main()
{
    Q1();
    Q2();
    Q3();
    Q4();
    Q5();
    Q6();
    return 0;
}