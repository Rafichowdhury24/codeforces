#include<iostream>  //Rafimia69   26/7/2025
using namespace std;
int main(){
    int w,k,n,i,loan=0;
    cin>>k;
    cin>>n;
    cin>>w;
    loan=k+loan;
    for(i=2;i<=w;i++){
        loan=loan+i*k;
    }
    if(loan>n){
        cout<<loan-n<<endl;
    }
    else
        cout<<"0"<<endl;

}
