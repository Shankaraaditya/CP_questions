#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    map<string ,int> m;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (!m.count(s))
        {
            m[s]=0;
            cout<<"OK"<<endl;
        }
        else
        {
            m[s]++;
            cout<<s<<m[s]<<endl;
        }
        
        
    }
    
    return 0;
}