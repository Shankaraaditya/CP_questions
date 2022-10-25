#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    do
    {
        cin>>a>>b>>c;
        if ((a+b)%2!=0 || (b+c)%2 !=0 || (c+a)%2 != 0  )
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