#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int t;
    cin>>t;
    string s;
    int l;
    do{
        cin>>s;
        l=s.length();
        if(l>10){
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
        
        
        
        t--;
    }while(t>0);
    
    
    
    
    
    
    return 0;
    
}