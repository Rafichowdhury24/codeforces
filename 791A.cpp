#include<iostream>      //Rafimia69     7/5/2025
using namespace std;
int main(){
    int a,b,years;
    cin>>a>>b;
    int L=3*a;
    int B=2*b;
    if(L>B){
        cout<<1<<endl;
    }
    else{
    for(years=2; years<100;years++){
        L=L*3;
        B=B*2;
        if(L>B){
            break;
        }
    }
    cout<<years<<endl;
}
    
}