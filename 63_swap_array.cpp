//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        int i=0;
        int j=0;
        int c=0;
        while(i<A.length()){
            if(A[i]==B[j] && i==j){
                i++;
                j++;
            }
            
            else{
                j++;
                
                if(A[i]==B[j]){
                    swap(B[i],B[j]);
                    c++;
                    j=i;
                }
            }
        }
        
        return c;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends