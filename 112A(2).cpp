#include <iostream>     //Rafimia69     2/5/2025
#include <cctype>       //for toupper , toupper converts all characters in capital for better comparison
#include <cstring>      //for strlen , length of the character arrays

using namespace std;

int main()
{
    char arr1[100], arr2[100];
    while(cin >> arr1 >> arr2){

    // Convert both strings to uppercase
    for (int i = 0; arr1[i]; i++)
        arr1[i] = toupper(arr1[i]);
    for (int i = 0; arr2[i]; i++)
        arr2[i] = toupper(arr2[i]);

    for(int i=0; i<arr1.size(); i++)
        {
            if(f[i]>s[i])
                {
                    cout<<"1\n";
                    return 0;}

            if(s[i]>f[i])
                {
                    cout<<"-1\n";
                    return 0;
                }

        }
        cout<<"0\n";
    }
        return 0;
}
