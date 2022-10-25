#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}



int main(){
    int t;
    cin>>t;
    string s;

    int n;
    int k;
    int ans;

    while (t>0)
    {
        cin>>n>>k;
        cin>>s;

        if (k==1)
        {
            ans =pow(2,n);
            cout<<ans<<endl;
        }
        else if (k== 0)
        {
            cout<<"0"<<endl;
        }
        else
        {

            ans= nCr(n,k);
            cout<<ans<<endl;
        }
        
        





        

        t--;
    }
    
    return 0;
}