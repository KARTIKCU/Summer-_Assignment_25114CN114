//WAP TO CHECK WHETHER NUMBER IS PRIME OR NOT

#include<iostream>
#include<cmath>
using namespace std;
bool Is_prime(int x){               // FUNCTION TO CHECK PRIME NUMBER
    bool isprime = true;
    for(int i = 2;i<=sqrt(x);i++){
        if(x%i==0){
             isprime = false;
             break;
        }else{
            continue;
        }
    }
    return isprime;
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<Is_prime(n)<<endl;
    
    return 0;
}
/* OUTPUT 
    0 ------> FALSE
    1 -------> TRUE */