//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
	
	map<char,int> mp;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] ==' ')
		{
			continue;
		}
		else{
		mp[s[i]]++;
		}	
	}  
}