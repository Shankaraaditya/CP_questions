//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    int convertToEven(string s)
    {
        int count=0;
        int flag=0;
        vector<int> v;
        // v.empty();
       for (int i = 0; i < s.length(); i++)
       {
        if (s[i]=='O')
        {
            v.push_back(i);
            flag=1;
        }

        }

        if(flag==1){
            return 1;
        }
        else{

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i+1] == v[i]+1)
            {
                count++;
            }
            
        }

            return count;

        }


        


        
       
       
      
      
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout << ob.convertToEven(s) << "\n";
   	}

    return 0;
}






//  {
//         int count=0;
//         int flag=0;
//         vector<int> v;
//         // v.empty();
//        for (int i = 0; i < s.length(); i++)
//        {
//         if (s[i]=='O')
//         {
//             v.push_back(i);
//             flag=1;
//             // count=1;
//             if(v[0]=='O'){
//                 count=1;
//             }
//         }

//         }

//         // if(flag==1){
//         //     return 1;
//         // }
//         // else{

//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i+1] != v[i]+1)
//             {
//                 count++;
//             }
            
//         }

//             return count;

        
//     // }
//          }
//          }
// // } Driver Code Ends