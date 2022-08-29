#include<iostream>
using namespace std;
int main(){
    int a,b,max;
    cout<<"Enter two number: ";
    cin>>a>>b;
    max=a>=b?a:b;
    cout<<"The Greatest number is "<<max<<endl;
    return 0;
}