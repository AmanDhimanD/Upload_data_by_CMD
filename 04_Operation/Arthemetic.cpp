#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int a,b;
    cout<<"Enetr first number:- ";
    cin>>a;
    cout<<"Enetr Second number:- ";
    cin>>b;

    cout<<"\nSum of two number is "<<a+b<<endl;
    cout<<"Sub of two number is "<<a-b<<endl;
    cout<<"Mul of two number is "<<a*b<<endl;
    cout<<"Division of two number is "<<(float)a/b<<endl;
    //this is called type casting
    return 0;
}
