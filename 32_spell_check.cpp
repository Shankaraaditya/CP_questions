#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    do
    {
        cin>>n;
        string s;
        string a = "Timur" ;
        cin>>s;
        
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        if (s==a)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

        t--;
    } while (t>0);
    
    return 0;
}