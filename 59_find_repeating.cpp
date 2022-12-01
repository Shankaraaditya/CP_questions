//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int , int >mp;

        

        int ans =-1;
        
        // for(int i = 0 ; i<n ; i++){
        //     // [mp.first[i]]++;
        //     mp[i]++;
        // }
        // int ans=0;
        
        // for( auto it: mp ){
        //     if (it.second==2)
        //     {
        //         ans = it.first;
        //     }
            
        // }

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >1)
            {
                ans = i+1;
                break;
            }
            
        }
        
        
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends