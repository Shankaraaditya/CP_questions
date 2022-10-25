#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin>>n;
    int flag=0;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    unordered_map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    for (auto x:m)
    {
       
           flag = flag + x.second/2;
     
    }
    
    cout<<flag<<endl;
    





    
    return 0;
}