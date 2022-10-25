#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int ans;
    
    do
    {
        cin>>n;
        int a[n];
        unordered_map<int, int > mp;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        for (auto i: mp)
        {
            if (i.second==1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[j]==i.first)
                    {
                        cout<<j+1<<endl;
                       
                      
                       
                    }
                    
                }
                
            }
            
        }
        

        
        
        // int x = mp.find('');

        2 3 3 5 5 7

        2 3 3 4 5 5 6 7 





      
            
        
        
        // cout<<ans<<endl;
        


        t--;
    } while (t>0);
    

    return 0;
}