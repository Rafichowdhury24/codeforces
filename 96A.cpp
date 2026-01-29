#include<bits/stdc++.h>     //Rafimia69     30/7/2025
using namespace std;
int main(){
    string s;
    cin >> s;
    int one=0 ,zero=0;
    if(s.size()<7){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<s.size();i++) {
        if(s[i]=='1'){
            one++;
            zero=0;
            }
            else
            {
                zero++;
                one=0;
            }
            if(zero==7||one==7){
            cout<<"YES";
            return 0;
            }

        }
        cout<<"NO";

}




