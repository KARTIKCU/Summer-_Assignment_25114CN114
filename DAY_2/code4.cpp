//WAP TO CHECK WHETHER A NUMBER IS PALINDROME

#include<iostream>
using namespace std;

int main(){
    int n,x,remainder=0,rev;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    x=n;
    while(n!=0){
        int lastdig =n%10;
        rev = remainder*10 + lastdig;
        remainder =rev;
        n/=10;
    }
    cout<<rev<<endl;
    if(x==rev){
        cout<<"THE NUMBER IS PALINDROME"<<endl;
    }else{        
        cout<<"THE  NUMBER IS NOT PALINDROME"<<endl;
    }

    return 0;
}