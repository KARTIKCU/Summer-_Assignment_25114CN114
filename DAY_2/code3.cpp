//WAP TO FIND PRODUCT OF DIGIT 

#include<iostream>
using namespace std;

int main(){
    int n,prod=1;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    while(n!=0){
        int lastdig = -(n%10);
        prod*=lastdig;
        n/=10;
    }
    cout<<"THE PRODUCT IS "<<prod<<endl;
    return 0;
}
