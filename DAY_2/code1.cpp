// WAP TO FIND SUM OF DIGIT OF A NUMBER 

#include<iostream>
using namespace std;

int main()
    {
    int n,sum = 0;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    while(n!=0){
        int lastdig = n%10;
        sum+=lastdig;
        n/=10;
    }
    if(n=0 || n>0){
    cout<<"THE SUM OF DIGITS ARE :"<<sum<<endl;
    }else{
    cout<<"THE SUM OF DIGITS ARE : "<<-(sum)<<endl;
    }
    return 0;
}