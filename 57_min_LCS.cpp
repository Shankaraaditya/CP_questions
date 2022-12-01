#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    string a,b;

   
    do
    {
         int ans=0;
         int c1[26]={0},c2[26]={0};
         
        cin>>n>>a>>b;

        for (int i = 0; i < n; i++)
        {
            c1[a[i]-'a']++;
            c2[b[i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++)
        {
            ans = max(ans,max(c1[i],c2[i]));
        }
        

        cout<<ans<<endl;

        ans=0;



        t--;
    } while (t>0);
    
    return 0;
}