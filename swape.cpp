//Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>

using namespace std;
int main(){
    int a=2,b=3,c;
    cout<<"Swap the give number"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Before swapping the a is 2"<<endl;
    cout<<"Before Swapping the b is 3"<<endl;
    c=b;
    b=a;
    a=c;
    cout<<"After swapping a is "<<a<<endl;
    cout<<"After Swapping b is "<<b;
    return 0;
}