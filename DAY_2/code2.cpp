//WAP TO REVERSE A NUMBER 

#include<iostream>
using namespace std;

int main(){
    int n,rev,remainder=0;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    while(n!=0){
        int lastdig =n%10;
        rev = remainder*10 + lastdig;
        remainder =rev;
        n/=10;
    }
    cout<<"THE REVERSE OF THE NUMBER IS :"<<rev<<endl;
    return 0;

}