#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The Number after swaping is "<<a<<" "<<b<<endl;
    return 0;
}