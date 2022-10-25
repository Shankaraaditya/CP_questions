#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>>s;
    // char a;

    // int i= s.begin();
    // int i = s.end();
    int i=0;
    int j=s.length()-1;

    while (i <= j)
    {
        
        while ((s[i]=='a' || s[i]=='e' || s[i]!='i'  || s[i]=='o' || s[i]=='u'))
        {
            break;
        }
       
        
       
        
        while ((s[j]!='a' && s[j]!='e' && s[j]!='i'  && s[j]!='o' && s[j]!='u') && j>=i)
        {
            j--;
        }
        
        swap(s[i],s[j]);
        
        
    }
    


    // int 
    cout<<s<<endl;

    
    

    return 0;
}