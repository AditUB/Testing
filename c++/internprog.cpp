#include<iostream>
#include<bits/stdc++.h> 
#include <string>

//Adhvith U B
//1RN21CS012

using namespace std;

//day 2
void day2()
{
    //1
    cout << "Maths = 90 \n Physics = 77 \n Chemistry = 69"<<endl;


    //2
    int a,b;
    cin>>a>>b;
    int x=(a>b)?a:b;
    cout<< x << endl;

    //3
    char c;
    cin>>c;
    int d=c;
    cout<<d<<endl;

    //4
    
    float e,f,g;
    cin>>e>>f>>g;
    float h=e/f-g;
    cout<<h<<endl;
    
    //5
    float i;
    cin>>i;
    
    cout<<((i-32)*(100.0/180.0))<<endl;
}


//day 3
/*
Day-3
1. Write a program of  a Simple calculator with basic operations.
2. Add the correct Datatype and display the result:
	myNum = 9;
	myDoubleNum = 8.99;
	myLetter = 'A’;
	myBool = false;
	myText = "Hello World";
3. C++ Program to Find Size of int, float, double and char in Your System
4. C++ Program to Swap Two Numbers
5. C++ Program to Check Whether Number is Even or Odd
*/
void day3()
{
    //1
    int a=0,b=0;
    char c=' ';
    cin>>a>>b>>c;
    switch(c)
    {
        case '+':
            cout<<a+b<<endl;
        break;
        case '-':
            cout<<a-b<<endl;
        break;
        case '*':
            cout<<a*b<<endl;
        break;
        case '/':
            if(b!=0)
                cout<<(double)a/(double)b<<endl;
            else    
                cout<<"Divide by 0 error"<<endl;
        break;
        default:
            cout<<"Invalid operation";
    }

    //2
    int myNum = 9;
	float myDoubleNum = 8.99;
	char myLetter ='A';
	bool myBool = false;
	string myText = "Hello World";
    cout<<myNum<<endl<<myDoubleNum<<endl<<myLetter<<endl<<myBool<<endl<<myText<<endl;

    //3
    cout<<sizeof(int)<<endl<<sizeof(float)<<endl<<sizeof(double)<<endl<<sizeof(char)<<endl;

    //4
    int d=0,e=0;
    cin>>d>>e;
    d+=e;
    e=d-e;
    d-=e;
    cout<<d<<endl<<e<<endl;

    //5
    int f=0;
    cin>>f;
    if(f%2==0)
        cout<<"Even"<<endl;
    else    
        cout<<"Odd"<<endl;
}


//day 4
/*
DAY 4
1. Write a program to print a number which is entered from keyboard using pointer.
2. Write a program to find out the greatest and the smallest among three numbers using pointers.
3.C++ Program to Find Factorial USING functions
4. C++ Program to Generate Multiplication Table USING functions
5. C++ Program to Display Fibonacci Series USING functions
*/
int factorial(int e)
{
    if(e==0)
      return 1;
    else 
     return e*factorial(e-1);
}

int fibo(int g)
{
    if(g==0||g==1)
        return g;
    else
        return fibo(g-1)+fibo(g-2);
}

void day4()
{
    //1
    int a=0;
    int *ptra=&a;
    cin>>*ptra;
    cout<<*ptra<<endl;

    //2
    int b=0,c=0,d=0;
    int *p1=&b,*p2=&c,*p3=&d;
    cin>>b>>c>>d;

    if(*p1<=*p2  && *p1<=*p3 )
    {
        cout<<"Smallest p1  "<<*p1<<endl;
    }
    if(*p2<=*p1  && *p2<=*p3 )
    {
        cout<<"Smallest p2  "<<*p2<<endl;
    }
    if(*p3<=*p1  && *p3<=*p2 )
    {
        cout<<"Smallest p3  "<<*p3<<endl;
    }

    if(*p1>=*p2  && *p1>=*p3 )
    {
        cout<<"greatest p1  "<<*p1<<endl;
    }
    if(*p2>=*p1  && *p2>=*p3 )
    {
        cout<<"greatest p2  "<<*p2<<endl;
    }
    if(*p3>=*p1  && *p3>=*p2 )
    {
        cout<<"greatest p3  "<<*p3<<endl;
    }
    
    //3
    int e=0;
    cin>>e;
    cout<<(factorial(e))<<endl; 

    //4
    int f=0;
    cin>>f;
    for(int i=1;i<11;i++)
    {
        cout<<i<<" x "<< f <<" = "<<i*f<<endl;
    }

    //5
    int g=0;
    cin>>g;
    for(int i=0;i<g;i++)
    {
        cout<<fibo(i)<<'\t';
    }
}


//day 5
/*
day5
Write a C++ Program for:
1. Find length of string
2. Compare two strings
3. Copy one string to another
4. Concatenate strings
5. Reverse a string
6. Delete all vowels from string
7. Delete specific word from string
8. Implement function overloading feature with the following example:
void SumNum(int A, int B);
void SumNum(int A, int B, int C);
void SumNum(int A, int B, int C, int D);
*/
void SumNum(int A, int B)
{
    cout<<A+B<<endl;
}
void SumNum(int A, int B, int C)
{
    cout<<A+B+C<<endl;
}
void SumNum(int A, int B, int C, int D)
{
    cout<<A+B+C+D<<endl;
}
void day5()
{
    //1
    string a="";
    getline(cin,a);
    cout<<"Length of string is "<<a.length()<<endl;

    //2
    string b="", c="";
    getline(cin, b);
    getline(cin, c);
    if(b.compare(c)==0)
        cout<<"Strings are same"<<endl;
    else
    cout<<"Strings are not same"<<endl;

    //3
    string d="",e="";
    getline(cin,d);
    e=d;
    cout<<e<<endl;

    //4
    string f="", g="";
    getline(cin,f);
    getline(cin,g);
    f+=g;
    cout<<f<<endl;

    //5
    string h="";
    getline(cin,h);
    reverse(h.begin(),h.end());
    cout<<h<<endl;

    //6
    string o="",r="";
    char t=' ';
    getline(cin,o);
    for(int i=0;i<o.length();i++)
    {
        t=o.at(i);
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'||t=='A'||t=='E'||t=='I'||t=='O'||t=='U')
            continue;
        else
            r+=t;
    }
    cout<<r<<endl;

    //7
    string u="",v="",w="";
    char x=' ';
    getline(cin,u);
    cin>>v;
    u+=" ";
    int fspace=0, lspace=0;
    while(lspace+1!=u.length())
    {
        
        for(int i=fspace+1;i<u.length();i++)
        {
            x=u.at(i);
            if(x==' ')
            {
                lspace=i;
                break;
            }
        }
        
        if(u.substr(fspace,(lspace-fspace))!=v)
        {            
            w+=u.substr(fspace,(lspace-fspace))+" ";
        }
        fspace=lspace+1;
    }
    cout<<w<<endl;

    //8
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    SumNum(num1,num2);
    SumNum(num1,num2,num3);
    SumNum(num1,num2,num3,num4);    
}


int main()
{
    day2();
    day3();
    day4();
    day5();
    return 0;
}


//    #include <iostream> 

//    using namespace std; 

//    int main() 

//    { 

//        int p; 

//        bool a = true; 

//        bool b = false; 

//        int x = 10; 

//        int y = 5; 

//        p = ((x | y) + (a + b)); 

//        cout << p; 

//        return 0; 

//    } 