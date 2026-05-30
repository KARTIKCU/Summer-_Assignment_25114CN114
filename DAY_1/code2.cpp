// WAP TO PRINT MULTIPLICATION TABLE OF GIVEN NUMBER 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of which multiple is required : ";
    cin>>n;
    cout<<"enter upto which multiple is required :";
    cin>>m;
    for(int i=0;i<=m;i++){
        cout<<n<<" x "<<i<<"  = "<<n*i<<endl;
    }
    return 0;
}