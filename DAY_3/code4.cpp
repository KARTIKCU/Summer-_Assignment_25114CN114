//WAP TO FIND LCM OF TWO NUMBER 

#include<iostream>
using namespace std;

int main(){
    int n,m,grat;
    cout<<"enter two number :";
    cin>>n;
    cin>>m;
    if(n>m){
    for(int i=1;i<=m;i++){
        if(n%i ==0 && m%i == 0){
            grat =i;
        }else{
            continue;
        }
    }
    }else{
        for(int i =1;i<=n;i++){
             if(n%i ==0 && m%i == 0){
            grat =i;
        }else{
            continue;
        }
    }
    }
    cout<<"LCM OF TWO NUMBER IS :"<<n*m/grat<<endl;    //LCM(a, b) = (a * b) / GCD(a, b) 
    return 0;
}