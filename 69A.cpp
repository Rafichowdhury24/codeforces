#include<iostream>      //Rafimia69     28/7/2025
using namespace std;
int main()
    {
        int n,x,y,z,xsum=0,ysum=0,zsum=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>x>>y>>z;
            xsum+=x;
            ysum+=y;
            zsum+=z;
        }
        if(xsum==0 && ysum==0 && zsum==0){
            cout<<"YES";
        }
        else
            cout<<"NO";
    }
