// WAP TO PRINT PRIME NUMBER IN RANGE 

#include<iostream>
#include<cmath>
using namespace std;

bool Is_prime(int x){                       // FUNCTION TO CHECK PRIME NUMBER
    bool isprime = true;
    for(int i = 2;i<=sqrt(x);i++){
        if(x%i==0){
             isprime = false;
        }else{
            continue;
        }
    }
    return isprime;
}
int main(){
    int m;
    cout<<"enter the range :";
    cin>>m;
    for(int i =2;i<=m;i++){
        if(Is_prime(i)){
            cout<<i<<endl;
        }else{
            continue;
        }
    }
    

    return 0;
}