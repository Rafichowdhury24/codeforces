#include<iostream>      //Rafimia69     28/7/2025
using namespace std;

int main(){
    long long n,co=0;
    cin>>n;
    while(n>0){
        int d=n%10;
        if(d==4 || d==7){
            //cout<<"d: "<<d<<endl;
           co++;
           //cout<< "co: "<<co<<endl;
        }


        n/=10;
    }

    if(co==4 || co==7)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
