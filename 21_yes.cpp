#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    do
    {

        cin>>s;
        int n=s.length();
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        if (s=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        




        t--;
    } while (t>0);
    
    return 0;
}