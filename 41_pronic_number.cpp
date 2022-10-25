#include <iostream>
#include <bits/stdc++.h>
#include <string>  
#include <sstream>

// void subString(char str[], int n,vector<int> v)
// {
    
//     for (int len = 1; len <= n; len++)
//     {   
      
//         for (int i = 0; i <= n - len; i++)
//         {
           
//             int j = i + len - 1;           
//             for (int k = i; k <= j; k++)
//                 v.push_back(str[k]);
//         }
//     }
// }

// void printSubstrings(string str,vector<int> v)
// {
     
    
//     int n = str.length();
     
    
//     for (int i = 0; i < n; i++) {
       
        
//         for (int j = i; j < n; j++) {
           
           
//             for (int k = i; k <= j; k++) {
//                 v.push_back(str[k]);
//             }
           
           
//         }
//     }
// }




using namespace std;
int main(){
    int n;
    int x;
    cin>>n;
    int p;
    string s;
    cin>>s;
    vector<int> a;

    // subString(s,n,a);
    // printSubstrings(s,a);

    for (int i = 0; i < n; i++) {
       
        
        for (int j = i; j < n; j++) {
           
           
            for (int k = i; k <= j; k++) {
                a.push_back(s[k]);
            }
           
           
        }
    }

   for (int i = 0; i < a.size(); i++)
   {
    // x = (int)a[i];
     stringstream aditya(s);
     aditya >> x;
      p= sqrt(x);


     if (p*(p+1)==x)
     {
        cout<<x<<" ";
     }
     

   }
   
   
    return 0;
}
