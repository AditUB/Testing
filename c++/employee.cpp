#include<iostream>
using namespace std;

class Employee{
    public:
        int empid;
        int experience;
        int salary;
        char name[100];
    public:
        void getData(){
            cout<<"Enter the name of the Employee:"<<endl;
            cin>>name;
            cout<<"Enter the Employee ID:"<<endl;
            cin>>empid;
            cout<<"Enter the experience :"<<endl;
            cin>>experience;
            cout<<"Enter the salary of the employee:"<<endl;
            cin>>salary;
        }
        void displayData(){
            cout<<"Employee Name :"<<name<<endl;
            cout<<"Employee ID:"<<empid<<endl;
            cout<<"Employee experience:"<<experience<<endl;
            cout<<"Employee salary:"<<salary<<endl;
        }


        
};
int main(){
    int n;
    cout<<"Enter the number of Employees:"<<endl;
    cin>>n;
    Employee E[n];
    Employee temp;
    // for(int i=0;i<n;i++){
    //     E[n]=E[i];
    // }
    for(int i=0;i<n;i++){
        E[i].getData();
    }
    cout<<"\nArray entered is"<<endl;
    for(int i=0;i<n;i++){
        E[i].displayData();
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(E[j].experience>E[j+1].experience){
                temp=E[j];
                E[j]=E[j+1];
                E[j+1]=temp;
            }
        }
    }
    cout<<"\nSorted array is"<<endl;
    for(int i=0;i<n;i++){
        E[i].displayData();
    }
    return 0;


}