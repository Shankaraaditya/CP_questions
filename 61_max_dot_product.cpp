//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	int maxDotProduct(int n, int m, int A[], int B[]) 
	{ 
		// Your code goes here
// 		int sum=0;
		sort(A,A+n);
		sort(B, B+m);
		int sum=0;
		int j=n-1;
		
		for(int i = m-1 ; i>=0 ; i--){
		    sum=sum+ B[i]*A[j];
		    j--;
		}
		
		return sum;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends