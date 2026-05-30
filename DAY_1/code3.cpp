// WAP TO FIND FACTORIAL OF A NUMBER 
#include<iostream>
using namespace std;


int main(){
    int n,fact=1;
    cout<<"enter the number : ";
    cin>>n;
    if(n>=0){
    if(n==0){
        cout<<"factorial of n is :"<<"1"<<endl;
    }else{
    for(int i=1;i<=n;i++){
        fact*=i;
    }
cout<<"factorial of n is :"<<fact<<endl;}
    }else{
        cout<<"invalid input"<<endl;
    }
    return 0;
}