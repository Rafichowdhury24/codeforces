#include<iostream>      //Rafimia69     7/5/2025
#include<string>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    cout<<endl;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
}