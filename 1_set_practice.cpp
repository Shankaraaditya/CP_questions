#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;

        s.insert(temp);
    }

    // cout<<*s.begin()<<endl;
   
        if (s.size()>=2)
        {
            cout<<*(++s.begin())<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    
    

    return 0;
}