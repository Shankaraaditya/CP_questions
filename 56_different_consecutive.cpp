#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    string s;
    int c=0;
    do
    {
        cin>>n>>s;

        for (int i = 0; i < n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                c++;

            }
            
        }
        
        cout<<c<<endl;

        c=0;




        t--;
    } while (t>0);
    
    return 0;
}