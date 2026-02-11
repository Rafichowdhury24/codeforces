#include<iostream>  //Rafimia69     5/1/2025
using namespace std;
int main()
{
    int n,p,v,t,number=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>v>>t;
        if(p+v+t>1)
            number++;
    }
    cout<< number<<endl;
}
