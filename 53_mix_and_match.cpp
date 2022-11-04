#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    string a,b,c;
    do
    {
        cin>>a>>b>>c;
        // map<char,int>x;
        // map<char,int>y;
        // map<char,int>z;

        // for (int i = 0; i < a.length(); i++)
        //     x[a[i]]++;

        // for (int i = 0; i < b.length(); i++)
        //     y[b[i]]++;

        // for (int i = 0; i < c.length(); i++)
        //      z[c[i]]++;


    map<char, int> M;
    map<char, int> N;
    map<char, int> O;
 
    
    for (int i = 0; a.length(); i++)
    {
        if (M.find(a[i]) == M.end())
        {
            M.insert(make_pair(a[i], 1));
        }
 
     
        else
        {
            M[a[i]]++;
        }
    }


    for (int i = 0; b.length(); i++)
    {
        if (M.find(b[i]) == M.end())
        {
            M.insert(make_pair(b[i], 1));
        }
 
     
        else
        {
            N[b[i]]++;
        }
    }


    for (int i = 0; c.length(); i++)
    {
        if (M.find(c[i]) == M.end())
        {
            M.insert(make_pair(c[i], 1));
        }
 
     
        else
        {
            O[c[i]]++;
        }
    }

    for (int i = 0; i < b.length(); i++)
    {
        if (/* condition */)
        {
            /* code */
        }
        
    }
    

    
        
    } while (t>0);
    
    return 0;
}