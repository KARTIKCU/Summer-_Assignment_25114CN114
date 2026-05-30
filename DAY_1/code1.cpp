//   WAP TO CALCULATE SUM OF FIRST 'n' NATURAL NUMBER

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the nth number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of first n natural number is : "<<sum<<endl;
    return 0;
}