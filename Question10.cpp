#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter size of an array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        sum=sum+a[j];
    cout<<"The sum of all element is "<<sum<<endl;
    return 0;
}