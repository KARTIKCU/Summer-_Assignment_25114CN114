//  WAP TO COUNT DIGIT IN A NUMBER 

#include<iostream>
using namespace std;


int main(){
    int n,count=0;
    cout<<"enter the number :";
    cin>>n;
    
    while(n>0){
        int lastdig = n%10;
        count++;
        n/=10;
    }
    cout<<"number of digit in n is :"<<count<<endl;
    return 0; 
}