#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int j=0;
    int co=0;
    string s;
    cin>> s;
    for (int i = 0; i < s.size(); i+=2) {
        co++;
            arr[j++] = s[i] - '0';       // convert char to int
        }
    sort(arr,arr+co);


    for( j=0;j<co;j++)
    {
        cout << arr[j];
        if(j<co-1)
        {
            cout<<"+";
        }
    }
}
